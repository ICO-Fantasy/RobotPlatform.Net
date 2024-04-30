using System.Collections.Generic;

namespace RDC.OCC.Generator;

public class EnumDecl : ElementDecl
{
    public ClassDecl OuterClass;
    public Dictionary<string, string> Enumerators = new();
    
    //--------------------------------------------------------------------------------------------------

    public override bool Ignore
    {
        get
        {
            // Ignore method if return type or any parameter type is ignored
            return _Ignore || (OuterClass?.Ignore ?? false);
        }
    }

    //--------------------------------------------------------------------------------------------------

}