using Macad.Core;

using RDC.Core.Visualization3D;

namespace RDC.Interaction;

public abstract class InteractiveContext : CoreContext
{
    public override Workspace Workspace
    {
        get { return base.Workspace; }
        protected set
        {
            WorkspaceController = value == null ? null : new WorkspaceController(value);
            base.Workspace = value;
            RaisePropertyChanged(nameof(WorkspaceController));
        }
    }

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        private set
        {
            if (_WorkspaceController == value)
                return;

            _WorkspaceController?.Dispose();
            _WorkspaceController = value;
        }
    }

    public override Viewport Viewport
    {
        get { return base.Viewport; }
        protected set
        {
            base.Viewport = value;
            if (value == null)
            {
                ViewportController = null;
                WorkspaceController.ActiveViewport = null;
            }
            else
            {
                WorkspaceController.ActiveViewport = base.Viewport;
                ViewportController = WorkspaceController.GetViewController(base.Viewport);
            }
        }
    }

    public ViewportController ViewportController
    {
        get { return _ViewportController; }
        private set
        {
            _ViewportController = value;

            RaisePropertyChanged();
        }
    }

    ViewportController _ViewportController;
    WorkspaceController _WorkspaceController;

    protected InteractiveContext()
    {
        Current = this;
        Workspace = new Workspace();
        Viewport = new Viewport(Workspace);
        WorkspaceController = new WorkspaceController(Workspace);
        ViewportController = new ViewportController(Viewport, WorkspaceController);
    }

    protected override void Dispose(bool disposing)
    {
        WorkspaceController?.Dispose();
        WorkspaceController = null;
        ViewportController = null;
        base.Dispose(disposing);
    }

    #region Statics

    public new static InteractiveContext Current { get; private set; }

    #endregion
}
