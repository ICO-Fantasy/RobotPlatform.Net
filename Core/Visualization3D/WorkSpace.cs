using System;
using System.Collections.Generic;
using System.Reflection;

using RDC.Common;
using RDC.Common.Serialization;
using RDC.OCC;

namespace RDC.Core.Visualization3D;

[SerializeType]
public sealed class Workspace : BaseObject, IDisposable
{
    #region 属性

    /// <summary>
    /// 视口
    /// </summary>
    /// <remarks>View渲染的实际窗口</remarks>
    [SerializeMember]
    public List<Viewport> Viewports { get; private set; }

    /// <summary>
    /// 视图
    /// </summary>
    public V3d_Viewer V3dViewer { get; private set; }

    /// <summary>
    /// 交互对象管理器
    /// </summary>
    public AIS_InteractiveContext AISContext { get; private set; }

    /// <summary>
    /// 无效化
    /// </summary>
    public bool NeedsImmediateRedraw { get; set; }

    /// <summary>
    /// 重绘
    /// </summary>
    public bool NeedsRedraw { get; set; }

    #endregion

    /// <summary>
    /// <remark>初始化时只创建容器，不初始化视图和管理器</remark>
    /// </summary>
    public Workspace()
    {
        // 创建视图容器
        Viewports = new List<Viewport>();
    }

    public void Dispose()
    {
        AISContext?.Dispose();
        AISContext = null;
        if (V3dViewer != null && !V3dViewer.IsDisposed())
        {
            V3dViewer.SetViewOff();
            V3dViewer.Dispose();
            V3dViewer = null;
        }
    }

    #region Init
    public void InitV3dViewer()
    {
        if (V3dViewer == null)
        {
            var ocGraphicDriver = Graphic3d_GraphicDriver.CreateOpenGlDriver();
            V3dViewer = new V3d_Viewer(ocGraphicDriver);
        }

        V3dViewer.SetDefaultViewSize(1000.0);
        V3dViewer.SetDefaultViewProj(V3d_TypeOfOrientation.XposYposZpos);
        V3dViewer.SetDefaultBackgroundColor(new Color(0.3, 0.3, 0.3).ToQuantityColor());
        V3dViewer.SetDefaultVisualization(V3d_TypeOfVisualization.ZBUFFER);
        V3dViewer.SetLightOn(
            new V3d_DirectionalLight(
                V3d_TypeOfOrientation.Zneg,
                Color.White.ToQuantityColor(),
                true
            )
        );
        V3dViewer.SetLightOn(new V3d_AmbientLight(Color.White.ToQuantityColor()));
    }

    public void InitAisContext()
    {
        if (V3dViewer == null)
        {
            var ocGraphicDriver = Graphic3d_GraphicDriver.CreateOpenGlDriver();
            V3dViewer = new V3d_Viewer(ocGraphicDriver);
            this.InitV3dViewer();
        }
        if (AISContext == null)
        {
            AISContext = new AIS_InteractiveContext(V3dViewer);
            AISContext.UpdateCurrentViewer();
        }

        AISContext.SetAutoActivateSelection(true);
        AISContext.SetToHilightSelected(false);
        AISContext.SetPickingStrategy(SelectMgr_PickingStrategy.OnlyTopmost);
        AISContext.SetDisplayMode((int)AIS_DisplayMode.Shaded, false);
        V3dViewer.DisplayPrivilegedPlane(false, 1.0);
        AISContext.EnableDrawHiddenLine();

        // Reinit ais parameters
        AISContext.SetPixelTolerance(2);

        var drawer = AISContext.DefaultDrawer();
        drawer.SetWireAspect(
            new Prs3d_LineAspect(Colors.Selection.ToQuantityColor(), Aspect_TypeOfLine.SOLID, 1.0)
        );
        drawer.SetTypeOfHLR(Prs3d_TypeOfHLR.TOH_PolyAlgo);
    }

    /// <summary>
    /// 实现接口，反序列化
    /// </summary>
    /// <param name="context"></param>
    public override void OnBeginDeserializing(SerializationContext context)
    {
        //todo 需要完善反序列化
        context.SetInstance(this);

        base.OnBeginDeserializing(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
