using System;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Interop;
using System.Windows.Media;
using RDC.Common.Interop;
using RDC.Core.Visualization3D;

/// 测试中不包含视图窗口管理器，直接将视图对象储存在类自身中


namespace TestWPF;

public class ViewportHwndHost : HwndHost
{
    readonly Int32Rect _InitialRect;
    readonly Viewport _Viewport;

    //--------------------------------------------------------------------------------------------------

    public ViewportHwndHost(UIElement parent)
    {
        var dpiScale = VisualTreeHelper.GetDpi(parent);
        var posRDC.Interaction = parent.TranslatePoint(new Point(), Application.Current.MainWindow);
        _InitialRect.Width = (int)(parent.RenderSize.Width * dpiScale.DpiScaleX);
        _InitialRect.Height = (int)(parent.RenderSize.Height * dpiScale.DpiScaleY);
        _InitialRect.X = (int)(pos.X * dpiScale.DpiScaleX);
        _InitialRect.Y = (int)(pos.Y * dpiScale.DpiScaleY);
    }

    /// <summary>
    /// 创建 Windows 核心
    /// </summary>
    /// <param name="hwndParent"></param>
    /// <returns></returns>
    protected override HandleRef BuildWindowCore(HandleRef hwndParent)
    {
        IntPtr windowHandle = _ViewportController.InitWindow(hwndParent.Handle, _InitialRect);

        return new HandleRef(this, windowHandle);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void DestroyWindowCore(HandleRef hwnd) { }

    //--------------------------------------------------------------------------------------------------

    protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
    {
        _ViewportController.Viewport.Resize();
        _ViewportController.WorkspaceController.Invalidate();
        base.OnRenderSizeChanged(sizeInfo);
    }

    //--------------------------------------------------------------------------------------------------

    public void SetAirspaceClipping(Thickness clipping)
    {
        if (Handle != IntPtr.Zero)
        {
            if ((clipping.Left + clipping.Right + clipping.Top + clipping.Bottom) <= 0)
            {
                Win32Api.SetWindowRgn(new HandleRef(this, Handle), IntPtr.Zero, true);
            }
            else
            {
                var dpiScale = VisualTreeHelper.GetDpi(this);
                var r = LayoutInformation.GetLayoutSlot(this);
                var rgn = Win32Api.CreateRectRgn(
                    (int)(clipping.Left * dpiScale.DpiScaleX),
                    (int)(clipping.Top * dpiScale.DpiScaleY),
                    (int)((r.Width - clipping.Right) * dpiScale.DpiScaleY),
                    (int)((r.Height - clipping.Bottom) * dpiScale.DpiScaleY)
                );
                Win32Api.SetWindowRgn(new HandleRef(this, Handle), rgn, false);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override IntPtr WndProc(
        IntPtr hwnd,
        int msg,
        IntPtr wParam,
        IntPtr lParam,
        ref bool handled
    )
    {
        // Switch by message type
        switch (msg)
        {
            case Win32Api.WM_SHOWWINDOW:
                if (_ViewportController?.Viewport?.V3dView != null)
                {
                    _ViewportController.Viewport.Resize();
                    _ViewportController.WorkspaceController.Invalidate();
                }
                break;

            case Win32Api.WM_NCHITTEST:
                // For mouse input, this window should be treated completely transparent
                // so Windows will forward all mouse events to the underlying WPF Window
                handled = true;
                return new IntPtr(Win32Api.HTTRANSPARENT);

            case Win32Api.WM_PAINT:
                _ViewportController?.WorkspaceController.Invalidate();
                break;
        }
        return base.WndProc(hwnd, msg, wParam, lParam, ref handled);
    }

    //--------------------------------------------------------------------------------------------------
}
