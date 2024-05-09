using System;
using System.IO;
using System.Text;
using System.Windows.Input;

using RDC.Common;
using RDC.Common.Serialization;
using RDC.Core;
using RDC.Interaction;

namespace TestWPF;

public class AppContext : InteractiveContext
{
    #region Properties

    public new static AppContext Current { get; private set; }

    #endregion

    #region Initialization

    AppContext()
    {
        //LoadShortcuts();
    }

    internal static void Initialize()
    {
        Current = new AppContext();
    }

    //void LoadShortcuts()
    //{
    //    ShortcutHandler.AddShortcut(
    //        ShortcutScope.Application,
    //        new(Key.F1, ApplicationCommands.Help)
    //    );
    //    ShortcutHandler.AddShortcut(
    //        ShortcutScope.Application,
    //        new(Key.S, ModifierKeys.Control, DocumentCommands.SaveAll)
    //    );
    //}

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Local App Data

    //public readonly string LocalAppDataDirectory = Path.Combine(
    //    Environment.GetFolderPath(
    //        Environment.SpecialFolder.ApplicationData,
    //        Environment.SpecialFolderOption.Create
    //    ),
    //    "RDC"
    //);

    #endregion
}
