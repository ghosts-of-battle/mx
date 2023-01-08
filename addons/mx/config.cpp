#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QGVAR(Item_MX_BlackCamo),
            QGVAR(Item_MX_GL_BlackCamo)
        };
        magazines[] = {

        };
        weapons[] = {

        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "a3_weapons_f",
            "gobmx_main"
        };
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
// #include "CfgMagazines.hpp"
// #include "CfgMagazineWells.hpp"