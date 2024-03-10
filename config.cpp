class CfgPatches 
{
    class kzDecayRabb 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods 
{
    class kzDecayRabb 
    {
        dir = "kzDecayRabb";
        picture = "";  // Path to a mod logo picture
        action = "";   // Action performed when clicking on the mod entry
        name = "kzDecayRabb";
		credits = "Jules";
		author = "Jules";
        hideName = 1;
        hidePicture = 1;
        version = "1.0";
        extra = 0;
        type= "mod";
        
        dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"kzDecayRabb/Scripts/4_World"};
            };
        };
    };
};
