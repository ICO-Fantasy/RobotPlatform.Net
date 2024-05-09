using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

using RDC.Common;
using RDC.Common.Interop;
using RDC.Core;
using RDC.Core.Visualization3D;
using RDC.OCC;

using Color = RDC.Common.Color;
using Point = System.Windows.Point;

namespace RDC.Interaction;

public sealed class ViewportController : BaseObject, IDisposable
{
    const int RUBBERBAND_FREEHAND_SELECTION_THRESHOLD_SQUARED = 100;

    #region Enums

    /// <summary>
    /// 框选模式
    /// </summary>
    public enum RubberbandSelectionMode
    {
        /// <summary>
        /// 矩形框选
        /// </summary>
        Rectangle,

        /// <summary>
        /// 任意框选
        /// </summary>
        Freehand
    }

    #endregion

    #region Properties

    public WorkspaceController WorkspaceController { get; private set; }

    public Viewport Viewport { get; private set; }

    /// <summary>
    /// 锁定视图到平面
    /// </summary>
    //public bool LockedToPlane
    //{
    //    get { return _LockedToPlane; }
    //    set
    //    {
    //        if (_LockedToPlane != value)
    //        {
    //            if (value)
    //            {
    //                SetPredefinedView(PredefinedViews.WorkingPlane);
    //            }
    //            _LockedToPlane = value;
    //            //_SetViewCube(!value);
    //            _SetTrihedron(!value && _ShowTrihedron);
    //            RaisePropertyChanged();
    //        }
    //    }
    //}



    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member variables

    static WNT_WClass _OcWindowClass;
    const double _ORBITPROJECTION_CONSTRAINT = Math.PI / 2 - 0.000000000001;
    WNT_Window _OcWindow;
    bool _ZoomFitAllOnInit;

    //Point _StartedMousePosition;
    //Point _LastMousePosition;
    //Pnt? _GravityPoint;
    ////bool _LockedToPlane;
    //bool _ShowTrihedron;

    //AIS_RubberBand _AisRubberBand;
    //RubberbandSelectionMode _RubberbandMode;
    //bool _RubberbandIncludeTouched;
    //readonly List<ValueTuple<int, int>> _RubberbandPoints = new();

    //Macad.Occt.Ext.AIS_ViewCubeEx _AisViewCube;

    #endregion

    #region Initialization

    public ViewportController(Viewport viewport, WorkspaceController workspaceController)
    {
        Debug.Assert(viewport != null);

        Viewport = viewport;
        WorkspaceController = workspaceController;

        Init();
    }

    //--------------------------------------------------------------------------------------------------

    ~ViewportController()
    {
        Dispose(false);
    }

    public void Dispose()
    {
        Dispose(true);
    }

    void Dispose(bool disposing)
    {
        Viewport.Dispose();
        if (_OcWindow != null && !_OcWindow.IsDisposed())
        {
            if (_OcWindow.IsMapped())
                _OcWindow.Unmap();
            _OcWindow.Dispose();
            _OcWindow = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void Init()
    {
        Viewport.Init(false);
    }

    //--------------------------------------------------------------------------------------------------

    public nint InitWindow(nint parentHWnd, Int32Rect initialRect)
    {
        Debug.Assert(Viewport.V3dView != null);

        uint style;

        if (_OcWindowClass == null)
        {
            style = Win32Api.CS_OWNDC;
            _OcWindowClass = new WNT_WClass(
                new TCollection_AsciiString("WorkspaceView"),
                nint.Zero,
                style,
                0
            );
        }

        if (initialRect.IsEmpty)
        {
            initialRect = new Int32Rect(0, 0, 64, 64);
        }

        style =
            Win32Api.WS_VISIBLE | (parentHWnd == nint.Zero ? Win32Api.WS_POPUP : Win32Api.WS_CHILD);
        _OcWindow = new WNT_Window(
            "WorkspaceView",
            _OcWindowClass,
            style,
            initialRect.X,
            initialRect.Y,
            initialRect.Width,
            initialRect.Height,
            Quantity_NameOfColor.GRAY50,
            parentHWnd
        );
        _OcWindow.Map();

        Viewport.V3dView.SetWindow(_OcWindow);
        //Viewport.InitV3dView();
        _SetTrihedron(true);
        if (_ZoomFitAllOnInit)
        {
            _ZoomFitAllOnInit = false;
            ZoomFitAll();
        }
        Viewport.V3dView.Update();
        Viewport.V3dView.MustBeResized();
        Viewport.V3dView.SetImmediateUpdate(false);

        var handle = _OcWindow.HWindow();
        return handle;
    }

    #endregion
    public void ZoomFitAll()
    {
        if (_OcWindow == null)
        {
            // We need a window, defer call
            _ZoomFitAllOnInit = true;
            return;
        }
        //WorkspaceController.VisualObjects.UpdateInvalidatedEntities();
        Viewport.V3dView.FitAll(0.1, false);
        Viewport.V3dView.ZFitAll(1.0);
        WorkspaceController.Invalidate();
        Viewport.OnViewMoved();
    }

    #region Usability Tools

    void _SetTrihedron(bool visible)
    {
        if (visible)
        {
            Viewport?.V3dView?.TriedronDisplay(
                Aspect_TypeOfTriedronPosition.LEFT_LOWER,
                new Color(0.941f, 0.973f, 1.0f).ToQuantityColor(),
                0.1,
                V3d_TypeOfVisualization.ZBUFFER
            );
        }
        else
        {
            Viewport?.V3dView?.TriedronErase();
        }
    }

    #endregion
}
