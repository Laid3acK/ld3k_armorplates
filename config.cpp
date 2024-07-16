class CfgPatches
{
    class ld3k_armorplates
    {
        requiredAddons[]=
        {
            "A3_Structures_F"
        };
        requiredVersion=0.1;
        units[]=
        {
            "ld3k_armour_10mm",
            "ld3k_armour_12mm",
            "ld3k_armour_18mm",
            "ld3k_armour_plate_3mm",
            "ld3k_armour_plate_5mm",
            "ld3k_armour_plate_7mm",
            "ld3k_armour_plate_12mm",
            "ld3k_armour_plate_16mm",
            "ld3k_armour_plate_23mm",
            "ld3k_armour_plate_30mm",
            "ld3k_armour_plate_80mm",
            "ld3k_metal_plate_6mm"
        };
        weapons[]={};
    };
};
class CfgVehicles
{
    // designed for tests with arma3diag_x64.exe (Arma3 Dev branch) and "Shots" diag_enable true; or "Shots" diag_enable false; https://community.bistudio.com/wiki/Arma_3:_Diagnostics_Exe
    class TargetBase;
    class Target_F: TargetBase // All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        /*author="$STR_A3_Bohemia_Interactive";
        mapSize=0.76;
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Target_F.jpg";
        _generalMacro="Target_F";
        scope=2;
        scopeCurator=2;
        displayName="$STR_A3_cfgVehicles_Target_F0";
        model="\A3\Structures_F\Training\Target_F.p3d";
        icon="iconObject_4x5";
        hiddenSelections[]=
        {
            "camo",
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "a3\structures_f\training\data\target_longrange_co.paa",
            "a3\structures_f\training\data\target_figure_co.paa"
        };
        destrType="DestructNo";*/
    };
    class ld3k_armour_10mm: Target_F // armour.bisurf, thickness .p3d 10mm
    {
        _generalMacro="ld3k_armour_10mm";
        displayName="RHA armour 10mm";
        model="\ld3k_armorplates\ld3k_armour_10mm.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class ld3k_armour_12mm: ld3k_armour_10mm // for test, armour.bisurf, thickness .p3d 12mm
    {
        _generalMacro="ld3k_armour_12mm";
        displayName="RHA armour 12mm";
        model="\ld3k_armorplates\ld3k_armour_12mm.p3d";
    };
    class ld3k_armour_18mm: ld3k_armour_10mm // armour.bisurf, thickness .p3d 18mm
    {
        _generalMacro="ld3k_armour_18mm";
        displayName="RHA armour 18mm";
        model="\ld3k_armorplates\ld3k_armour_18mm.p3d";
    };
    class ld3k_armour_plate_3mm: ld3k_armour_10mm // armour_plate_3mm.bisurf, thickness .p3d 3mm
    {
        _generalMacro="ld3k_armour_plate_3mm";
        displayName="RHA armour plate 3mm";
        model="\ld3k_armorplates\ld3k_armour_plate_3mm.p3d";
    };
    class ld3k_armour_plate_5mm: ld3k_armour_10mm // armour_plate_5mm.bisurf, thickness .p3d 5mm
    {
        _generalMacro="ld3k_armour_plate_5mm";
        displayName="RHA armour plate 5mm";
        model="\ld3k_armorplates\ld3k_armour_plate_5mm.p3d";
    };
    class ld3k_armour_plate_7mm: ld3k_armour_10mm // armour_plate_7mm.bisurf, thickness .p3d 7mm
    {
        _generalMacro="ld3k_armour_plate_7mm";
        displayName="RHA armour plate 7mm";
        model="\ld3k_armorplates\ld3k_armour_plate_7mm.p3d";
    };
    class ld3k_armour_plate_12mm: ld3k_armour_10mm // armour_plate_12mm.bisurf, thickness .p3d 12mm, example in-game: I_Heli_light_03_unarmed_F (AAF WY-55 Hellcat, armor=40), O_Heli_Light_02_unarmed_F (CSAT PO-30 Orca, armor=40)
    {
        _generalMacro="ld3k_armour_plate_12mm";
        displayName="RHA armour plate 12mm";
        model="\ld3k_armorplates\ld3k_armour_plate_12mm.p3d";
    };
    class ld3k_armour_plate_16mm: ld3k_armour_10mm // armour_plate_16mm.bisurf, thickness .p3d 16mm, example in-game: I_Heli_Transport_02_F (AAF CH-49 Mohawk, armor=40)
    {
        _generalMacro="ld3k_armour_plate_16mm";
        displayName="RHA armour plate 16mm";
        model="\ld3k_armorplates\ld3k_armour_plate_16mm.p3d";
    };
    class ld3k_armour_plate_23mm: ld3k_armour_10mm // armour_plate_23mm.bisurf, thickness .p3d 23mm, example in-game: I_MRAP_03_F (AAF Strider, armor=200), O_MRAP_02_F (CSAT Ifrit, armor=200)
    {
        _generalMacro="ld3k_armour_plate_23mm";
        displayName="RHA armour plate 23mm";
        model="\ld3k_armorplates\ld3k_armour_plate_23mm.p3d";
    };
    class ld3k_armour_plate_30mm: ld3k_armour_10mm // armour_plate.bisurf thickness 30mm, thickness .p3d 30mm, example in-game: B_MRAP_01_F (NATO Hunter, armor=200), B_LSV_01_unarmed_F (NATO Prowler, armor=80)
    {
        _generalMacro="ld3k_armour_plate_30mm";
        displayName="RHA armour plate 30mm";
        model="\ld3k_armorplates\ld3k_armour_plate_30mm.p3d";
    };
    class ld3k_armour_plate_80mm: ld3k_armour_10mm // armour_plate_medium.bisurf thickness 80mm, thickness .p3d 80mm, example in-game: O_LSV_02_unarmed_F (CSAT Qilin, armor=75)
    {
        _generalMacro="ld3k_armour_plate_80mm";
        displayName="RHA armour plate 80mm";
        model="\ld3k_armorplates\ld3k_armour_plate_80mm.p3d";
    };
    class ld3k_metal_plate_6mm: ld3k_armour_10mm // metal_plate_thin.bisurf thickness 6mm, thickness .p3d 6mm, example in-game: I_G_Offroad_01_armed_F (FIA Offroad HMG, armor=32)
    {
        _generalMacro="ld3k_metal_plate_6mm";
        displayName="Steel metal plate 6mm";
        model="\ld3k_armorplates\ld3k_metal_plate_6mm.p3d";
    };
};
