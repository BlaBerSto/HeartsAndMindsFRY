btc_custom_loc = [
/*
    DESCRIPTION: [POS(Array),TYPE(String),NAME(String),RADIUS (Number),IS OCCUPIED(Bool)]
    Possible types: "NameVillage","NameCity","NameCityCapital","NameLocal","Hill","Airport","NameMarine", "StrongpointArea", "BorderCrossing", "VegetationFir"
    EXAMPLE: [[13132.8,3315.07,0.00128174],"NameVillage","Mountain 1",800,true]
*/
];

/*
    Here you can tweak spectator view during respawn screen.
*/
BIS_respSpecAi = false;                  // Allow spectating of AI
BIS_respSpecAllowFreeCamera = false;     // Allow moving the camera independent from units (players)
BIS_respSpecAllow3PPCamera = false;      // Allow 3rd person camera
BIS_respSpecShowFocus = false;           // Show info about the selected unit (dissapears behind the respawn UI)
BIS_respSpecShowCameraButtons = true;    // Show buttons for switching between free camera, 1st and 3rd person view (partially overlayed by respawn UI)
BIS_respSpecShowControlsHelper = true;   // Show the controls tutorial box
BIS_respSpecShowHeader = true;           // Top bar of the spectator UI including mission time
BIS_respSpecLists = true;                // Show list of available units and locations on the left hand side

/*
    Here you can specify which equipment should be added or removed from the arsenal.
    Please take care that there are different categories (weapons, magazines, items, backpacks) for different pieces of equipment into which you have to classify the classnames.
    In all cases, you need the classname of an object.

    Attention: The function of these lists depends on the setting in the mission parameter (Restrict arsenal).
        - "Full": here you have only the registered items in the arsenal available.
        - "Remove only": here all registered items are removed from the arsenal. This only works for the ACE3 arsenal!

    Example(s):
        private _weapons = [
            "arifle_MX_F",          //Classname for the rifle MX
            "arifle_MX_SW_F",       //Classname for the rifle MX LSW
            "arifle_MXC_F"          //Classname for the rifle MXC
        ];

        private _items = [
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Shades_Green"
        ];
*/
private _weapons = [];
private _magazines = [];
private _items = [];
private _backpacks = [];

btc_custom_arsenal = [_weapons, _magazines, _items, _backpacks];

/*
    Here you can specify which equipment is loaded on player connection.
*/

private _radio = ["tf_anprc152", "ACRE_PRC148"] select (isClass(configFile >> "cfgPatches" >> "acre_main"));
//Array of colored item: 0 - Desert, 1 - Tropic, 2 - Black, 3 - forest
private _uniforms = ["TREL_vrs_Coveralls_TigerPurple", "FRJ_MUP_lizard_1", "FRJ_MUP_lizard_2", "FRJ_MUP_lizard_3"];
private _uniformsCBRN = ["UK3CB_U_KZS_UP_KHK"];
private _uniformsSniper = ["TREL_vrs_Coveralls_Panteri"];
private _vests = ["vjM99WDLRP", "vjM99SMBRP", "vjM99OKLRP", "M99OKLRP", "M99WDLRP"];
private _helmets = ["YGO_Cap_Basic","FRJ_MUP_m59_85", "FRJ_MUP_patrolcap_2", "Beret_pjp"];
private _hoods = ["default", "rhs_balaclava1_olive", "G_Balaclava_blk", "UK3CB_G_Balaclava2_BLK"];
private _hoodCBRN = "G_AirPurifyingRespirator_01_F";
private _laserdesignators = ["rhs_pdu4"];
private _night_visions = [];
private _weapons = ["rhs_weap_m70ab2", "rhs_weap_m70b1", "rhs_weap_m70b1n", "rhs_weap_m70b3n", "rhs_weap_m70b3n", "rhs_weap_m70b3n_pbg40", "jna_m77b1", ""];
private _weapons_machineGunner = ["rhs_weap_m84", "jna_m72"];
private _weapons_sniper = ["rhs_weap_m76", "safp_zastava_M93"];
private _bipods = [];
private _pistols = ["rhs_weap_cz99"];
private _launcher_AT = ["rhs_weap_m80", "rhs_weap_rpg7"];
private _launcher_AA = ["CRO_launch_Strela"];
private _backpacks = ["jna_ak_bag_bp"];
private _backpacks_big = ["jna_fieldpack"];
private _backpackCBRN = "B_SCBA_01_F";

btc_arsenal_loadout = [_uniforms, _uniformsCBRN, _uniformsSniper, _vests, _helmets, _hoods, [_hoodCBRN, _hoodCBRN, _hoodCBRN, _hoodCBRN], _laserdesignators, _night_visions, _weapons, _weapons_sniper, _weapons_machineGunner, _bipods, _pistols, _launcher_AT, _launcher_AA, _backpacks, _backpacks_big, [_backpackCBRN, _backpackCBRN, _backpackCBRN, _backpackCBRN], [_radio, _radio, _radio, _radio]];
