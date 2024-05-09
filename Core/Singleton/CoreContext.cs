using System;
using System.Linq;

using RDC.Common;
using RDC.Core.Visualization3D;

namespace Macad.Core;

/// <summary>
/// CoreContext 是一个持有核心模块全局状态的单例。核心模块中大多数类的功能都使用该类访问状态。
/// </summary>
public abstract class CoreContext : BaseObject, IDisposable
{
    /// <summary>
    /// CoreContext 的当前实例。在实例化新上下文类时，它将被自动设置。
    /// </summary>
    public static CoreContext Current
    {
        get { return _Current; }
        set
        {
            _Current?.Dispose();
            _Current = value;
        }
    }

    public virtual Workspace Workspace
    {
        get { return _Workspace; }
        protected set
        {
            _Workspace = value;
            Viewport = _Workspace?.Viewports.FirstOrDefault();
            RaisePropertyChanged();
        }
    }

    public virtual Viewport Viewport
    {
        get { return _Viewport; }
        protected set
        {
            _Viewport = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    //public virtual Model Document
    //{
    //    get { return _Document; }
    //    set
    //    {
    //        _Document = value;

    //        RaisePropertyChanged();
    //        RaisePropertyChanged(nameof(UndoHandler));
    //        RaisePropertyChanged(nameof(Layers));
    //        Layers?.OnActivated();

    //        if (!(_Document is null) && !_Document.Workspaces.Contains(_Workspace))
    //            Workspace = _Document.Workspaces.FirstOrDefault();
    //    }
    //}

    //public UndoHandler UndoHandler
    //{
    //    get { return Document?.UndoHandler; }
    //}

    ////--------------------------------------------------------------------------------------------------

    //public LayerCollection Layers
    //{
    //    get { return Document?.Layers; }
    //}

    ////--------------------------------------------------------------------------------------------------

    //public MessageHandler MessageHandler { get; } = new();

    //--------------------------------------------------------------------------------------------------

    //public ParameterSets Parameters
    //{
    //    get
    //    {
    //        if (_ParameterSets == null)
    //            _ParameterSets =
    //                LoadLocalSettings<ParameterSets>("Parameters") ?? new ParameterSets();

    //        return _ParameterSets;
    //    }
    //}

    #region 初始化
    protected CoreContext()
    {
        //CoreModule.Initialize();
        Current = this;
    }

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    protected virtual void Dispose(bool disposing)
    {
        if (disposing)
        {
            //MessageHandler?.Dispose();
        }

        _Workspace = null;
        _Viewport = null;
        //_Document = null;
    }

    #endregion
    //public virtual void SaveSettings()
    //{
    //    if (_ParameterSets != null)
    //        SaveLocalSettings("Parameters", _ParameterSets);
    //}

    //public virtual void SaveLocalSettings(string name, object obj) { }

    //public virtual T LoadLocalSettings<T>(string name)
    //    where T : class
    //{
    //    return null;
    //}

    #region 私有参数

    static CoreContext _Current;

    //Model _Document;
    Workspace _Workspace;
    Viewport _Viewport;
    //ParameterSets _ParameterSets;

    #endregion
}
