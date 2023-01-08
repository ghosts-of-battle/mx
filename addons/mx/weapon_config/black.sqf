#include "..\script_component.hpp"
// MX
    class GVAR(MX_BlackCamo): arifle_MX_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = "{Ghost}Black MX";
        picture = QPATHTOF(UI\mx_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_blk0_blk.paa),
            QPATHTOF(data\mx\xmx_base_blk0_blk.paa),
        };
        baseWeapon = QGVAR(MX_BlackCamo);
    };

// GL
    class GVAR(MX_GL_BlackCamo): arifle_MX_GL_Black_F {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "YonV";
        displayName = "{Ghost}Black MX GL";
        picture = QPATHTOF(UI\mx_gl_blackcamo_ca.paa);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\mx\xmx_base_blk0_blk.paa),
            "\A3\Weapons_F_EPB\Rifles\MX_Black\Data\GLX_Black_CO.paa"
        };
        baseWeapon = QGVAR(MX_GL_BlackCamo);
    };