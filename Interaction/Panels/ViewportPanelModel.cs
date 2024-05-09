using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows.Input;

using RDC.Common;

namespace RDC.Interaction.Panels;

public class ViewportPanelModel : BaseObject
{
    #region Properties

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        private set
        {
            if (_WorkspaceController != value)
            {
                _WorkspaceController = value;
                RaisePropertyChanged();
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

    public Cursor Cursor
    {
        get { return _Cursor; }
        set
        {
            _Cursor = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    WorkspaceController _WorkspaceController;
    ViewportController _ViewportController;
    object _CursorOwner;
    Cursor _Cursor;

    #endregion

    #region Property handler

    internal ViewportPanelModel()
    {
        //Entity.ErrorStateChanged += _Entity_ErrorStateChanged;
        //InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
        WorkspaceController = InteractiveContext.Current.WorkspaceController;
        ViewportController = InteractiveContext.Current.ViewportController;
    }

    //--------------------------------------------------------------------------------------------------

    ~ViewportPanelModel()
    {
        //Entity.ErrorStateChanged -= _Entity_ErrorStateChanged;
        //InteractiveContext.Current.PropertyChanged -= Context_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    //void Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
    //{
    //    if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
    //    {
    //        if (_WorkspaceController != null)
    //        {
    //            _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
    //        }
    //        WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
    //        if (_WorkspaceController != null)
    //        {
    //            _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
    //        }
    //    }
    //    else if (e.PropertyName == nameof(InteractiveContext.ViewportController))
    //    {
    //        ViewportController = (sender as InteractiveContext)?.ViewportController;
    //    }
    //}

    #endregion

    #region Control Callbacks

    //public bool KeyDown(KeyEventArgs keyEventArgs)
    //{


    //    // Forward to workspace
    //    if (!(InteractiveContext.Current?.WorkspaceController is null))
    //    {
    //        if (InteractiveContext.Current.ShortcutHandler.KeyPressed(ShortcutScope.Workspace, keyEventArgs.Key, Keyboard.Modifiers)
    //            || InteractiveContext.Current.WorkspaceController.KeyPressed(keyEventArgs.Key))
    //        {
    //            return true;
    //        }
    //    }

    //    return false;
    //}

    //--------------------------------------------------------------------------------------------------

    #endregion
}
