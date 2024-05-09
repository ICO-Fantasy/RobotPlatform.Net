using System;
using System.Windows;

namespace TestWPF;

/// <summary>
/// Interaction logic for App.xaml
/// </summary>
public partial class App : Application
{
    protected override void OnStartup(StartupEventArgs e)
    {
        // 启用指针支持
        System.AppContext.SetSwitch(
            "Switch.System.Windows.Input.Stylus.EnablePointerSupport",
            true
        );

        // 设置当前线程的区域设置为中文
        //CultureInfo culture = new CultureInfo("zh");
        //Thread.CurrentThread.CurrentCulture = culture;
        //Thread.CurrentThread.CurrentUICulture = culture;
        //CultureInfo.DefaultThreadCurrentCulture = culture;
        //CultureInfo.DefaultThreadCurrentUICulture = culture;

        // 初始化崩溃处理程序，并设置临时目录
        //string tempDir = Path.GetTempPath();
        //CrashHandler.Init(tempDir);

        // 检查命令行参数
        //var cmdLine = new CommandLine(e.Args);

        // 在初始化期间显示欢迎对话框
        //bool bSkipWelcome =
        //    cmdLine.NoWelcomeDialog || cmdLine.HasPathToOpen || cmdLine.HasScriptToRun;
        //if (!bSkipWelcome)
        //{
        //    WelcomeDialog.ShowAsync();
        //}

        // 设置 AppUserModelID 用于 Shell 功能，如 JumpList、任务栏分组
        //Win32Api.SetCurrentProcessExplicitAppUserModelID("Macad.1");

        // 创建实例互斥体
        // 用于执行卸载检查
        //CreateInstanceMutexes();

        // 初始化 OCCT
#if DEBUG
        Environment.SetEnvironmentVariable(@"CSF_DEBUG", "1");
#endif

        // 初始化全局事件处理程序
        //GlobalEventHandler.Init();

        // 初始化应用程序上下文
        AppContext.Initialize();

        // 启动主窗口
        //MainWindow = new MainWindow();
        ////WelcomeDialog.Current?.SetMainWindow(MainWindow);
        //MainWindow.Show();

        // 设置关闭模式为在主窗口关闭时关闭应用程序
        ShutdownMode = ShutdownMode.OnMainWindowClose;

        base.OnStartup(e);
    }
}
