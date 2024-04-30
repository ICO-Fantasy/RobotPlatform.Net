﻿#load "_Common.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

public static class Occt
{
    /// <summary>
    /// OCCT的路径
    /// </summary>
    public static string OcctPath { get; private set; }
    /// <summary>
    /// OCCT平台特定的路径
    /// </summary>
    const string _OcctPlatformPath = @"win64\vc143";
    /// <summary>
    /// OCCT的主要工具包
    /// </summary>
    static readonly string[] _OcctToolkits = new string[]
    {
        "TKernel", "TKMath",
        "TKG2d", "TKG3d", "TKGeomBase", "TKBRep", "TKMesh",
        "TKGeomAlgo", "TKTopAlgo", "TKPrim", "TKBO", "TKFeat", "TKShHealing", "TKFillet", "TKOffset", "TKBool",
        "TKService", "TKV3d", "TKOpenGl",
    };
    /// <summary>
    /// OCCT的部分工具包
    /// </summary>
    static readonly string[] _OcctPartialToolkits = new string[]
    {
        "TKXSBase", "TKDE", "TKLCAF", "TKXCAF", "TKVCAF", "TKCAF", "TKCDF", "TKDEIGES", "TKDESTEP",
        "TKHLR",
    };
    /// <summary>
    /// OCCT的部分包
    /// </summary>
    static readonly string[] _OcctPartialPackages = new string[]
    {
        "HLRAlgo", "HLRBRep",
        "Interface", "IFSelect", "MoniTool", "XSControl", "STEPControl", "StepData", "IGESControl", "IGESData"
    };
    /// <summary>
    /// 包含文件的扩展名
    /// </summary>
    static readonly string[] _IncludeFileExtensions = new string[]
    {
        ".h", ".hxx", ".lxx", ".gxx"
    };
    /// <summary>
    /// Freetype库的路径
    /// </summary>
    public static string FreetypePath { get; private set; }
    /// <summary>
    /// Freetype的DLL文件名
    /// </summary>
    public static readonly string[] FreetypeBinaries = new string[]
    {
        "freetype.dll"
    };
    /// <summary>
    /// TBB（Intel Threading Building Blocks）并行计算库的路径
    /// </summary>
    public static string TbbPath { get; private set; }
    /// <summary>
    /// TBB的 Release 版本的二进制文件名
    /// </summary>
    public static readonly string[] TbbBinariesRelease = new string[]
    {
        "tbb12.dll",
        "tbbmalloc.dll",
    };
    /// <summary>
    /// TBB的 Debug 版本的二进制文件名
    /// </summary>
    public static readonly string[] TbbBinariesDebug = new string[]
    {
        "tbb12_debug.dll",
        "tbbmalloc_debug.dll",
    };
    /// <summary>
    /// 额外依赖项的源路径列表
    /// </summary>
    public static List<string> AdditionalDependenciesSourcePaths = new List<string>();

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 用于设置OCCT的路径，并检查OCCT是否存在于指定路径中。然后，它还会检查OCCT的依赖项（如TBB、Freetype等）是否已安装并可用。
    /// </summary>
    /// <param name="occtSourcePath"></param>
    /// <returns></returns>
    public static bool SetOcctPath(string occtSourcePath)
    {
        OcctPath = occtSourcePath;
        if (!File.Exists(Path.Combine(OcctPath, @"src\Standard\Standard_Version.hxx")))
        {
            OcctPath = Path.Combine(occtSourcePath, "opencascade");
            if (!File.Exists(Path.Combine(OcctPath, @"src\Standard\Standard_Version.hxx")))
            {
                Printer.Error($"OCCT not found in directory {occtSourcePath}.");
                Printer.Error($"Please make sure that you have selected to install the sources (folder 'src' must exist in path).");
                return false;
            }
        }
        Printer.Success($"OCCT found in directory {occtSourcePath}.");

        // Get Third Party Paths
        var output = new List<string>();
        if (Common.Run("cmd.exe", "/V /C \"call custom.bat && echo !CSF_OPT_BIN64! && echo !HAVE_TBB! && echo !HAVE_FREEIMAGE! && echo !HAVE_FFMPEG! && echo !HAVE_OPENVR!\"", OcctPath, output) != 0)
        {
            Printer.Error($"The batch file 'Custom.bat' in OCCT directory could not be executed.");
            return false;
        }
        bool hasTbb = output[1].Contains("true");
        bool hasFreeImage = output[2].Contains("true");
        bool hasFFMpeg = output[3].Contains("true");
        bool hasOpenVR = output[4].Contains("true");

        if (!hasTbb)
        {
            Printer.Error($"Usage of TBB has not been enabled. The build scripts do expect that TBB has been enabled.");
            return false;
        }
        var binPaths = output[0].Split(';');

        // Check for FreeType
        FreetypePath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("freetype")) ?? "");
        if (!File.Exists(Path.Combine(FreetypePath, FreetypeBinaries[0])))
        {
            Printer.Error($"The file {FreetypeBinaries[0]} could not be found in folder {FreetypePath}.");
            return false;
        }
        Printer.Success($"Freetype found in folder {FreetypePath}");

        // Check for TBB
        TbbPath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("tbb")) ?? "");
        if (!File.Exists(Path.Combine(TbbPath, TbbBinariesRelease[0])))
        {
            Printer.Error($"The file {TbbBinariesRelease[0]} could not be found in folder {TbbPath}.");
            return false;
        }
        Printer.Success($"TBB found in folder {TbbPath}");

        // Check for FreeImage
        if (hasFreeImage)
        {
            var freeImageSourcePath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("freeimage")) ?? "");
            if (File.Exists(Path.Combine(freeImageSourcePath, "FreeImage.dll")))
            {
                Printer.Success($"FreeImage found in folder {freeImageSourcePath}");
                AdditionalDependenciesSourcePaths.Add(freeImageSourcePath);
            }
        }

        // Check for FFMPEG
        if (hasFFMpeg)
        {
            var ffmpegSourcePath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("ffmpeg")) ?? "");
            if (File.Exists(Path.Combine(ffmpegSourcePath, "ffprobe.exe")))
            {
                Printer.Success($"FFMPEG found in folder {ffmpegSourcePath}");
                AdditionalDependenciesSourcePaths.Add(ffmpegSourcePath);
            }
        }

        // Check for OpenVR
        if (hasFreeImage && hasFFMpeg && !hasOpenVR)
        {
            hasOpenVR = true;
            Printer.Warning("It seems that you are referencing the official download build of OCCT. This download does erroneously not declare the HAVE_OPENVR switch. This switch is now set anyway to avoid crashes due to missing dlls.");
        }
        if (hasOpenVR)
        {
            var openVrPath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("openvr")) ?? "");
            if (File.Exists(Path.Combine(openVrPath, "openvr_api.dll")))
            {
                Printer.Success($"OpenVR found in folder {openVrPath}");
                AdditionalDependenciesSourcePaths.Add(openVrPath);
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 返回OCCT的所有包，包括主要工具包和部分包
    /// </summary>
    /// <returns></returns>
    public static IEnumerable<string> GetPackages()
    {
        var list = new List<string>();

        foreach (var tk in _OcctToolkits)
        {
            var packages = File.ReadAllLines(Path.Combine(OcctPath, string.Format("src\\{0}\\PACKAGES", tk)));
            list.AddRange(packages);
        }
        list.AddRange(_OcctPartialPackages);
        return list.Distinct();
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 返回 OCCT lib文件
    /// </summary>
    /// <param name="debug"></param>
    /// <returns></returns>
    public static string GetLibraryPath(bool debug)
    {
        return Path.Combine(OcctPath, _OcctPlatformPath, "lib" + (debug ? "d" : ""));
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 返回 OCCT dll 文件
    /// </summary>
    /// <param name="debug"></param>
    /// <returns></returns>
    public static string GetBinaryPath(bool debug)
    {
        return Path.Combine(OcctPath, _OcctPlatformPath, "bin" + (debug ? "d" : ""));
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// 创建一个Nuspec文件，该文件包含所有OCCT相关的头文件、库和二进制文件的路径信息，以便于打包和分发。
    /// </summary>
    /// <param name="sourcePath"></param>
    /// <returns></returns>
    public static bool CreateNuspec(string sourcePath)
    {
        if (!Occt.SetOcctPath(sourcePath))
            return false;

        if (Occt.AdditionalDependenciesSourcePaths.Count > 0)
        {
            Printer.Error("Packaging OCCT is only supported with dependencies Freetype and TBB. Please disable all other and rebuild OCCT.");
            return false;
        }

        var sb = new StringBuilder();
        foreach (string package in Occt.GetPackages())
        {
            sb.AppendLine(@$"<file src=""src\{package}\*.hxx"" target=""native\opencascade\inc"" />");
            if (Directory.EnumerateFiles(Path.Combine(OcctPath, "src", package), "*.h").Any())
                sb.AppendLine(@$"<file src=""src\{package}\*.h"" target=""native\opencascade\inc"" />");
            if (Directory.EnumerateFiles(Path.Combine(OcctPath, "src", package), "*.lxx").Any())
                sb.AppendLine(@$"<file src=""src\{package}\*.lxx"" target=""native\opencascade\inc"" />");
            if (Directory.EnumerateFiles(Path.Combine(OcctPath, "src", package), "*.gxx").Any())
                sb.AppendLine(@$"<file src=""src\{package}\*.gxx"" target=""native\opencascade\inc"" />");
        }

        foreach (var tk in _OcctToolkits.Concat(_OcctPartialToolkits))
        {
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\lib\{tk}.lib"" target=""native\opencascade\win-x64\lib"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\libd\{tk}.lib"" target=""native\opencascade\win-x64\libd"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\bin\{tk}.*"" target=""native\opencascade\win-x64\bin"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\bind\{tk}.*"" target=""native\opencascade\win-x64\bind"" />");
        }

        var freetypeRelativePath = Utils.GetRelativePath(OcctPath, FreetypePath);
        sb.AppendLine(@$"<file src=""{freetypeRelativePath}\..\*.txt"" target=""native\freetype"" />");
        foreach (var file in FreetypeBinaries)
        {
            sb.AppendLine(@$"<file src=""{freetypeRelativePath}\{file}"" target=""native\freetype\win-x64\bin"" />");
        }

        var tbbRelativePath = Utils.GetRelativePath(OcctPath, TbbPath);
        sb.AppendLine(@$"<file src=""{tbbRelativePath}\..\..\*.txt"" target=""native\tbb"" />");
        foreach (var file in TbbBinariesRelease.Concat(TbbBinariesDebug))
        {
            sb.AppendLine(@$"<file src=""{tbbRelativePath}\{file}"" target=""native\tbb\win-x64\bin"" />");
        }

        var template = File.ReadAllLines(Path.Combine(Common.GetRootFolder(), "Build", "Nuget", "Macad.ThirdParty.Occt.nuspec.tmpl"));
        using var outFile = new StreamWriter(File.Open(Path.Combine(Common.GetRootFolder(), "Build", "Nuget", "Macad.ThirdParty.Occt.nuspec"), FileMode.Create));
        foreach (var line in template)
        {
            if (line.Contains("$additionalFiles$"))
                outFile.Write(sb.ToString());
            else
                outFile.WriteLine(line);
        }

        Printer.Success("Nuspec file created.");
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}