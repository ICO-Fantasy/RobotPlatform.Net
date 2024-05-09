using System;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Interop;
using System.Windows.Media;

using RDC.Common.Interop;
using RDC.Core.Visualization3D;

namespace RDC.Interaction
{
    public class ViewportHwndHost : HwndHost
    {
        readonly ViewportController _ViewportController;
        readonly Int32Rect _InitialRect;

        /// <summary>
        /// 构造函数，初始化 ViewportHwndHost 实例
        /// </summary>
        /// <param name="viewportController">ViewportController 实例</param>
        /// <param name="parent">父级 UIElement</param>
        public ViewportHwndHost(ViewportController viewportController, UIElement parent)
        {
            _ViewportController = viewportController;
            //获取系统dpi
            var dpiScale = VisualTreeHelper.GetDpi(parent);
            //获取鼠标位置
            var pos = parent.TranslatePoint(new Point(), Application.Current.MainWindow);
            _InitialRect.Width = (int)(parent.RenderSize.Width * dpiScale.DpiScaleX);
            _InitialRect.Height = (int)(parent.RenderSize.Height * dpiScale.DpiScaleY);
            _InitialRect.X = (int)(pos.X * dpiScale.DpiScaleX);
            _InitialRect.Y = (int)(pos.Y * dpiScale.DpiScaleY);
        }

        #region Overrides
        /// <summary>
        /// 创建 Windows 核心
        /// </summary>
        /// <param name="hwndParent">父级窗口句柄</param>
        /// <returns>创建的窗口句柄</returns>
        protected override HandleRef BuildWindowCore(HandleRef hwndParent)
        {
            IntPtr windowHandle = _ViewportController.InitWindow(hwndParent.Handle, _InitialRect);
            return new HandleRef(this, windowHandle);
        }

        /// <summary>
        /// 销毁窗口
        /// </summary>
        /// <param name="hwnd">窗口句柄</param>
        protected override void DestroyWindowCore(HandleRef hwnd) { }

        /// <summary>
        /// 当渲染尺寸发生变化时调用
        /// </summary>
        /// <param name="sizeInfo">SizeChangedInfo 对象</param>
        protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
        {
            _ViewportController.Viewport.Resize();
            _ViewportController.WorkspaceController.Invalidate();
            base.OnRenderSizeChanged(sizeInfo);
        }

        /// <summary>
        /// 设置空间裁剪
        /// </summary>
        /// <param name="clipping">裁剪边距</param>
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

        /// <summary>
        /// 处理窗口消息
        /// </summary>
        /// <param name="hwnd">窗口句柄</param>
        /// <param name="msg">消息类型</param>
        /// <param name="wParam">消息参数</param>
        /// <param name="lParam">消息参数</param>
        /// <param name="handled">是否已处理</param>
        /// <returns>处理结果</returns>
        protected override IntPtr WndProc(
            IntPtr hwnd,
            int msg,
            IntPtr wParam,
            IntPtr lParam,
            ref bool handled
        )
        {
            // switch消息类型
            switch (msg)
            {
                case Win32Api.WM_SHOWWINDOW:
                    // 显示Window时调整窗口大小并重绘
                    if (_ViewportController?.Viewport?.V3dView != null)
                    {
                        _ViewportController.Viewport.Resize();
                        _ViewportController.WorkspaceController.Invalidate();
                    }
                    break;
                case Win32Api.WM_NCHITTEST:
                    // 当接收到鼠标事件时，如果窗口需要处理鼠标输入，则将handled标志设置为true，并返回HTTRANSPARENT表示完全透明
                    //这样Windows会将所有鼠标事件转发到底层的WPF窗口。
                    handled = true;
                    return new IntPtr(Win32Api.HTTRANSPARENT);

                case Win32Api.WM_PAINT:
                    // 当接收到窗口绘制消息时执行重绘		msg	15	int

                    _ViewportController?.WorkspaceController.Invalidate();
                    break;
            }
            return base.WndProc(hwnd, msg, wParam, lParam, ref handled);
        }
        #endregion
    }
}
