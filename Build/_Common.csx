﻿using System.IO;
using System;
using System.Diagnostics;
using System.Collections.Generic;

public static class Common
{
    /// <summary>
    /// 返回环境变量MMROOT的全路径，该路径可能是项目的根目录。
    /// </summary>
    /// <returns></returns>
    public static string GetRootFolder()
    {
        return Path.GetFullPath(Environment.GetEnvironmentVariable("MMROOT"));
    }
    /// <summary>
    /// 运行外部进程
    /// </summary>
    /// <param name="path">进程路径</param>
    /// <param name="commandline">命令行参数</param>
    /// <param name="workingDir">工作目录</param>
    /// <param name="output">输出列表</param>
    /// <param name="useShell">是否使用Shell</param>
    /// <returns></returns>
    public static int Run(string path, string commandline, string workingDir = null, List<string> output = null, bool useShell = false)
    {
        try
        {
            var info = new ProcessStartInfo(Environment.ExpandEnvironmentVariables(path), commandline);
            info.UseShellExecute = useShell;
            info.ErrorDialog = false;
            if (!string.IsNullOrEmpty(workingDir))
                info.WorkingDirectory = Environment.ExpandEnvironmentVariables(workingDir);
            var proc = new Process();
            proc.StartInfo = info;

            if (output != null)
            {
                proc.StartInfo.RedirectStandardOutput = true;
                proc.OutputDataReceived += (sender, args) => output.Add(args.Data);
            }

            proc.Start();
            if (output != null)
            {
                proc.BeginOutputReadLine();
            }
            proc.WaitForExit();

            return proc.ExitCode;
        }
        catch (Exception e)
        {
            Printer.Error($"The following process could not be startet: {path}");
            Printer.Error($"Message: {e.Message}");
            return -1;
        }
    }
}

//--------------------------------------------------------------------------------------------------

public static class Printer
{
    public static void Error(string message)
    {
        _Print(ConsoleColor.Red, message);
    }

    public static void Success(string message)
    {
        _Print(ConsoleColor.Green, message);
    }

    public static void Warning(string message)
    {
        _Print(ConsoleColor.Yellow, message);
    }

    public static void Line(string message)
    {
        _Print(null, message);
    }

    static void _Print(ConsoleColor? color, string message)
    {
        if (color.HasValue)
            Console.ForegroundColor = color.Value;
        Console.WriteLine(message);
        Console.ResetColor();
    }
}

//--------------------------------------------------------------------------------------------------

public static class Utils
{
    /// <summary>
    /// 返回从 fromPath 到 toPath 的相对路径
    /// </summary>
    /// <param name="fromPath"></param>
    /// <param name="toPath"></param>
    /// <returns></returns>
    /// <exception cref="ArgumentNullException"></exception>
    public static string GetRelativePath(string fromPath, string toPath)
    {
        if (string.IsNullOrEmpty(fromPath))
        {
            throw new ArgumentNullException("fromPath");
        }

        if (string.IsNullOrEmpty(toPath))
        {
            throw new ArgumentNullException("toPath");
        }

        Uri fromUri = new Uri(AppendDirectorySeparatorChar(fromPath));
        Uri toUri = new Uri(AppendDirectorySeparatorChar(toPath));

        if (fromUri.Scheme != toUri.Scheme)
        {
            return toPath;
        }

        Uri relativeUri = fromUri.MakeRelativeUri(toUri);
        string relativePath = Uri.UnescapeDataString(relativeUri.ToString());

        if (string.Equals(toUri.Scheme, Uri.UriSchemeFile, StringComparison.OrdinalIgnoreCase))
        {
            relativePath = relativePath.Replace(Path.AltDirectorySeparatorChar, Path.DirectorySeparatorChar);
        }

        return RemoveDirectorySeparatorChar(relativePath);
    }
    /// <summary>
    /// 添加目录分隔符
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    private static string AppendDirectorySeparatorChar(string path)
    {
        // Append a slash only if the path is a directory and does not have a slash.
        if (!Path.HasExtension(path) &&
            !path.EndsWith(Path.DirectorySeparatorChar.ToString()))
        {
            return path + Path.DirectorySeparatorChar;
        }

        return path;
    }
    /// <summary>
    /// 移除目录分隔符
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    private static string RemoveDirectorySeparatorChar(string path)
    {
        // Remove slash
        if (!Path.HasExtension(path) &&
            path.EndsWith(Path.DirectorySeparatorChar.ToString()))
        {
            return path.Remove(path.Length - 1, 1);
        }

        return path;
    }
}
