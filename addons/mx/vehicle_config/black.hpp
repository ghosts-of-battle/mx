class GVAR(Item_MX_BlackCamo): Weapon_Base_F {
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "WeaponsPrimary";
    author = "YonV";
    displayName = "{Ghost}Black MX";

    class TransportItems {
        class GVAR(MX_BlackCamo) {
            name = QGVAR(MX_BlackCamo);
            count = 1;
        };
    };
};

class GVAR(Item_MX_GL_BlackCamo): Weapon_Base_F {
    dlc = QUOTE(PREFIX);
    scope = 2;
    scopeCurator = 2;
    vehicleClass = "WeaponsPrimary";
    author = "YonV";
    displayName = "{Ghost}Black MX GL";

    class TransportItems {
        class GVAR(MX_GL_BlackCamo) {
            name = QGVAR(MX_GL_BlackCamo);
            count = 1;
        };
    };
};
