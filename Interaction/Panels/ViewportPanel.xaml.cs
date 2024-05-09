using System.Windows.Controls;
using System.Windows.Media;


namespace RDC.Interaction.Panels;

/// <summary>
/// ViewportPanel.xaml 的交互逻辑
/// </summary>
public partial class ViewportPanel : Border
{
    public ViewportPanel()
    {
        InitializeComponent();
        //Model.ViewportController.Viewport;
        _ViewportControllerChanged();
    }

    void _ViewportControllerChanged()
    {
        if (Child != null)
            Child = null;

        var viewportController = InteractiveContext.Current.ViewportController;

        if (viewportController is null)
            return;

        // Viewport changed
        var dpiScale = VisualTreeHelper.GetDpi(this);
        viewportController.Viewport.DpiScale = (dpiScale.DpiScaleX + dpiScale.DpiScaleY) / 2.0;

        // 创建OpenGL窗口
        Child = new ViewportHwndHost(viewportController, this);
    }
}
