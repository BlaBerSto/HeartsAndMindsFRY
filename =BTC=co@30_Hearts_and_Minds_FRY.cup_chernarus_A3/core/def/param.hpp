class Params {
    class btc_p_time_title { // << Time options >>
        title = $STR_BTC_HAM_PARAM_TIME_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_time { // Set the start time:
        title = __EVAL(format ["      %1", localize "STR_A3_CFGVEHICLES_MODULEDATE_F_ARGUMENTS_HOUR_0"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"};
        default = 5;
    };
    class btc_p_acctime { // Acceleration time multiplier:
        title = __EVAL(format ["      %1", localize "STR_USRACT_TIME_INC"]);
        values[]={1,2,3,4,5,6,7,8,9,10,11,12};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
        default = 3;
    };
    class btc_p_change_time { // Enable change day time for officer on the arsenal box:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_CHANGE_TIME_ENABLEARSENAL"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };    
    class btc_p_change_weather { // Enable change weather for officer on the arsenal box
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_CHANGE_WEATHER_ENABLEARSENAL"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_db_title { // << Server management >>
        title = $STR_BTC_HAM_PARAM_DB_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_load { // Load the savegame (if available)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_LOAD"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_auto_db { // Auto savegame when all players disconnected
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ASAVE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED}; // texts[]={"Off","On"};
        default = 1;
    };
    class btc_p_db_autoRestartTime { // Time before auto restart/shutdown server
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTARTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,24,48,72};
        texts[]={$STR_DISABLED, "1h","2h","3h","4h","5h","6h","7h","8h","9h","10h","11h","12h","24h","48h","72h"};
        default = 0;
    };
    class btc_p_db_autoRestartHour1 { // Hour of auto restart/shutdown server
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_HRESTARTTIME"]);
        values[]={-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
        texts[]={$STR_DISABLED,"00h00","01h00","02h00","03h00","04h00","05h00","06h00","07h00","08h00","09h00","10h00","11h00","12h00","13h00","14h00","15h00","16h00","17h00","18h00","19h00","20h00","21h00","22h00","23h00"};
        default = -1;
    };
    class btc_p_db_autoRestartHour2 { // Hour of auto restart/shutdown server
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_HRESTARTTIME"]);
        values[]={-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
        texts[]={$STR_DISABLED,"00h00","01h00","02h00","03h00","04h00","05h00","06h00","07h00","08h00","09h00","10h00","11h00","12h00","13h00","14h00","15h00","16h00","17h00","18h00","19h00","20h00","21h00","22h00","23h00"};
        default = -1;
    };
    class btc_p_db_autoRestartType { // Auto restart/shutdown server (Must define in server.cfg: serverCommandPassword = "btc_password")
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_DB_ARESTART"]);
        values[]={1,2,3,4};
        texts[]={$STR_DISP_MP_DS_RESTART,$STR_BTC_HAM_PARAM_DB_SHUTDOWN,$STR_BTC_HAM_PARAM_DB_SAVERESTART, $STR_BTC_HAM_PARAM_DB_SAVESHUTDOWN}; // texts[]={"Restart", "Shutdown","Save and restart", "Save and shutdown"};
        default = 4;
    };
    class btc_p_respawn_title { // << Respawn options >>
        title = $STR_BTC_HAM_RESP_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_respawn_fromOutsideBase { // Enable respawn menu access from outside the base:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_OUTSIDEBASE"]);
        values[]={0,1,2,3,4,5};
        texts[]={$STR_DISABLED, $STR_BTC_HAM_RESP_FOB, $STR_BTC_HAM_RESP_FOBHELO, $STR_BTC_HAM_RESP_FOBHELI, $STR_BTC_HAM_RESP_FOBHELIVEHI, $STR_BTC_HAM_RESP_FOBHELIVEHIPLAYER};
        default = 0;
    };
    class btc_p_respawn_fromOutsideTimeout { // Add a 1 min timeout for accessing the respawn menu for:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_OUTSIDETIMEOUT"]);
        values[]={0,1,2,3,4,5};
        texts[]={$STR_DISABLED, $STR_BTC_HAM_RESP_TIMEOUTPLAYER, $STR_BTC_HAM_RESP_TIMEOUTVEHIPLAYER, $STR_BTC_HAM_RESP_TIMEOUTHELIVEHIPLAYER, $STR_BTC_HAM_RESP_TIMEOUTFOBHELOVEHIPLAYER, $STR_BTC_HAM_RESP_TIMEOUTFOBHELIVEHIPLAYER};
        default = 0;
    };
    class btc_p_respawn_location { // Respawn locations available:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_LOCATION"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_RESP_FOBRALLY, $STR_BTC_HAM_RESP_FOBRALLYHELO, $STR_BTC_HAM_RESP_FOBRALLYHELI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHI, $STR_BTC_HAM_RESP_FOBRALLYHELIVEHILEADER};
        default = 0;
    };
    class btc_p_rallypointTimer { // Time before rallypoint self-destruction:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_RALLYTIMER"]);
        values[]={0,5,10,30,60};
        texts[]={$STR_DISABLED,"5 min","10 min","30 min","60 min"};
        default = 30;
    };
    class btc_p_respawn_ticketsAtStart { // Number of tickets at mission start:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSATSTART"]);
        values[]={-1,0,1,2,3,4,5,10,15,20,25,30,50,70,100,150,200};
        texts[]={$STR_DISABLED,"0","1","2","3","4","5","10","15","20","25","30","50","70","100","150","200"};
        default = 50;
    };
    class btc_p_respawn_ticketsLost { // Number of tickets lost per death:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSLOST"]);
        values[]={1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 1;
    };
    class btc_p_respawn_ticketsShare { // Tickets are share between:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETSHARE"]);
        values[]={0,1};
        texts[]={$STR_BTC_HAM_RESP_SAMEFACTION, $STR_BTC_HAM_RESP_NOTSHARE};
        default = 0;
    };
    class btc_p_respawn_ticketsFromPrisoners { // Attribute tickets from prisoners to (Enable only if tickets are not share):
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TICKETPRISONER"]);
        values[]={1,2,3,4};
        texts[]={$STR_BTC_HAM_RESP_ALLCONNECTED, $STR_BTC_HAM_RESP_PLAYER, $STR_BTC_HAM_RESP_DEADPLAYER, $STR_BTC_HAM_RESP_LOWESTPLAYER};
        default = 1;
    };
    class btc_p_body_timeBeforeShowMarker { // Time before showing marker of dead player's body:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_TIMEBEFORESHOWMARKER"]);
        values[]={-1,0,5,10,30,60};
        texts[]={$STR_DISABLED,"0 min","5 min","10 min","30 min","60 min"};
        default = -1;
    };
    class btc_p_respawn_arsenal { // ACE Arsenal available on respawn after been killed:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_RESP_ENABLEARSENAL"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_slot_isShare { // Each slot is share between players
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SLOT_ISSHARE"]);
        values[]={0,1};
        texts[]={$STR_DISABLED, $STR_ENABLED};
        default = 1;
    };
    class btc_p_type_title { // << Faction options >>
        title = $STR_BTC_HAM_PARAM_FAC_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_en { // Enemy type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETYPE"]);
        values[]={0};
        texts[]={"0 - : Kosovo Liberation Army (Side: WEST)"};
        default = 0;
    };
    class btc_p_AA { // Anti-Air infantry:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_EAA"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_tank { // Enemy uses Tank:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_ETANK"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_civ { // Civil type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPE"]);
        values[]={0};
        texts[]={"0 - Chernarus Civilians (Side: CIV)"};
        default = 0;
    };
    class btc_p_civ_veh { // Civil vehicle type:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_FAC_CTYPEVEH"]);
        values[]={0};
        texts[]={"0 - Chernarus Civilians (Side: CIV)"};
        default = 0;
    };
    class btc_p_spawn_title { // << Spawn options >>
        title = $STR_BTC_HAM_PARAM_SPAWN_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_density_of_occupiedCity { // Density of city occupied:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ISOCCUPIED_DENSITY"]);
        values[]={0,10,20,30,40,45,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","45%","50%","60%","70%","80%","90%","100%"};
        default = 30;
    };
    class btc_p_mil_group_ratio { // Enemy density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 30;
    };
    class btc_p_wp_houseDensity { // Density of military in house: (Can't be above 100%)
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_MIL_INHOUSE_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 70;
    };
    class btc_p_mil_static_group_ratio { // Enemy static density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ENEMY_STATIC_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 30;
    };
    class btc_p_civ_group_ratio { // Civilian density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIVILIAN_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 70;
    };
    class btc_p_animals_group_ratio { // Animal density:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_ANIMALS_DENSITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 100;
    };
    class btc_p_veh_armed_ho { // Add armed vehicles in Hideout:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDHIDEOUT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_veh_armed_spawn_more { // Add armed vehicles in Side mission/Cache:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPAWN_ARMEDOTHER"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_patrol_max { // Maximum number of military patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_PATROL_MAX"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"1","2","3","4","5","6","7","8","9","10"};
        default = 9;
    };
    class btc_p_civ_max_veh { // Maximum number of civilian patrol:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_SPWAN_CIV_MAX_VEH"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        texts[]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"};
        default = 10;
    };
    class btc_p_IED_title { // << IED options >>
        title = $STR_BTC_HAM_PARAM_IED_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_ied { // IEDs ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_RATIO"]);
        values[]={0, 1, 2, 3};
        texts[]={$STR_DISABLED,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Off","Low","Normal","High"};
        default = 1;
    };
    class btc_p_ied_spot { // IEDs spotting difficulty:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_SPOT"]);
        values[]={0, 1, 2};
        texts[]={$STR_BTC_HAM_PARAM_IED_SPOT_VERYEASY,$STR_BTC_HAM_PARAM_IED_SPOT_EASY,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL}; //texts[]={"Very easy","Easy","Normal"};
        default = 2;
    };
    class btc_p_ied_placement { // IEDs type of placement:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_PLACEMENT"]);
        values[]={2, -1, 3};
        texts[]={$STR_BTC_HAM_PARAM_IED_PLACEMENT_ROADSIDE,$STR_BTC_HAM_PARAM_IED_PLACEMENT_MIDDLE,$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT}; //texts[]={"Roadside", "Middle", "Random"};
        default = 3;
    };
	class btc_p_ied_power { // Power of IED explosion:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_POWER"]);
        values[]={0, 1};
        texts[]={$STR_MEDIUM,$STR_SMALL};
        default = 0;
	};
    class btc_p_ied_drone { // Drone bomber:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_IED_DRONE"]);
        values[]={0, 1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_hideout_cache_title { // << Hideout/Cache options >>
        title = $STR_BTC_HAM_PARAM_HIDE_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_hideout_n { // Hideout numbers:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_HIDE_NUMBERS"]);
        values[]={99,0,1,2,3,4,5,6,7,8,9,10};
        texts[]={$STR_3DEN_ATTRIBUTES_OBJECTTEXTURE_RANDOM_TEXT,"0","1","2","3","4","5","6","7","8","9","10"}; //texts[]={"Random","0","1","2","3","4","5"};
        default = 8;
    };
    class btc_p_cache_info_def { // Info cache distance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DISTANCE"]);
        values[]={500,1000,1500,2000,2500,3000,3500,4000,5000};
        texts[]={"500 m","1000 m","1500 m","2000 m","2500 m","3000 m","3500 m","4000 m","5000 m"};
        default = 1000;
    };
    class btc_p_cache_info_ratio { //Cache info ratio:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_RATIO"]);
        values[]={50,100};
        texts[]={"50 m","100 m"};
        default = 100;
    };
    class btc_p_info_chance { // Intel from dead bodies chance:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_DEADINFO"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"100 %","90 %","80 %","70 %","60 %","50 %","40 %","30 %","20 %","10 %","0 %"};
        default = 70;
    };
    class btc_p_info_houseDensity { // Density of intel in house:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_CACHE_HOUSEINFO"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","1%","2%","3%","4%","5%","6%","7%","8%","9%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 10;
    };
    class btc_p_skill_title { // << A3 Skill options >>
        title = $STR_BTC_HAM_PARAM_SKILL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_set_skill { // Set skill?
        title = __EVAL(format ["      %1?", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_set_skill_general { // Set skill, general
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_3DEN_SCENARIO_TEXTSINGULAR"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 0;
    };
    class btc_p_set_skill_aimingAccuracy { // Set skill, aimingAccuracy
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMACC"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 1;
    };
    class btc_p_set_skill_aimingShake { // Set skill, aimingShake
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSKILL"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 4;
    };
    class btc_p_set_skill_aimingSpeed { // Set skill, aimingSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_AIMSPEED"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 3;
    };
    class btc_p_set_skill_endurance { // Set skill, endurance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_VR_STAMINA"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 5;
    };
    class btc_p_set_skill_spotDistance { // Set skill, spotDistance
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTDIST"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 9;
    };
    class btc_p_set_skill_spotTime { // Set skill, spotTime
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_SPOTTIME"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 7;
    };
    class btc_p_set_skill_courage { // Set skill, courage
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_COURAGE"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 2;
    };
    class btc_p_set_skill_reloadSpeed { // Set skill, reloadSpeed
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_BTC_HAM_PARAM_SKILL_RELOAD"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 10;
    };
    class btc_p_set_skill_commanding { // Set skill, commanding
        title = __EVAL(format ["      %1, %2", localize "STR_A3_CFGVEHICLES_MODULESKILL_F_0", localize "STR_A3_CFGHINTS0"]);
        values[]={0,1,2,3,4,5,6,7,8,9,10};
        texts[]={"0","0.1","0.2","0.3","0.4","0.5","0.6","0.7","0.8","0.9","1"};
        default = 7;
    };
    class btc_p_gameplay_title { // << Gameplay options >>
        title = $STR_BTC_HAM_PARAM_GAMEPLAY_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_sea { // Extend battlefield to sea:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SEA"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_chem_sides { // Toggle chemical side missions:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_CHEM_SIDES"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_chem_cache_probability { // Chemical weapon cache probability:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_CHEM_CACHE_PROBABILITY"]);
        values[]={0,10,20,30,40,50,60,70,80,90,100};
        texts[]={"0%","10%","20%","30%","40%","50%","60%","70%","80%","90%","100%"};
        default = 0;
    };
    class btc_p_spect { // Spectrum devices
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SPECT"]);
        values[] = {0,1};
        texts[] = {$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_side_mission_cycle { // Side mission cycle:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_GAMEPLAY_SIDEM"]);
        values[] = {0,1,2,3,4};
        texts[] = {$STR_DISABLED,1,2,3,4};
        default = 0;
    };
    class btc_p_arsenal_title { // << Arsenal options >>
        title = $STR_BTC_HAM_PARAM_ARSENAL_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_arsenal_Type { // Type of the arsenal:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE"]);
        values[]={0,1,2,3,4};
        texts[]={$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BIS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_BA_PLUS,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALTYPE_ACE_PLUS}; //texts[]={"BIS - Vanilla","BIS - Vanilla and ACE 3","BIS - Vanilla and ACE 3 (scroll wheel action)","ACE 3","ACE 3 (scroll wheel action)"};
        default = 4;
    };
    class btc_p_arsenal_Restrict { // Restricted arsenal (See /define_mod.sqf):
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR"]);
        values[]={0,1,2,3};
        texts[] = {$STR_DISABLED,$STR_3DEN_ATTRIBUTES_SPEEDMODE_FULL,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_REMOVEONLY,$STR_BTC_HAM_PARAM_ARSENAL_ARSENALRESTR_FILTER}; //texts[]={"Off","Full","Remove only (works only with ACE3-Arsenal)","Filter on player role (works only with ACE3-Arsenal)"};
        default = 0;
    };
    class btc_p_autoloadout { // loadout:
        title = __EVAL(format ["      %1:", localize "STR_ACE_Interaction_Equipment"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_ARSENAL_AUTOLOADOUT, $STR_BTC_HAM_PARAM_ARSENAL_RMVWEAPONS};
        default = 1;
    };
    class btc_p_garage { // Activate garage for admin:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_ARSENAL_GARAGEADMIN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 1;
    };
    class btc_p_main_title { // << Other options >>
        title = $STR_BTC_HAM_PARAM_OTHER_TITLE;
        values[]={0};
        texts[]={""};
        default = 0;
    };
    class btc_p_rep { // Reputation at start:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_REPSTART"]);
        values[]={0, 200, 500, 750};
        texts[]={$STR_ACE_ViewDistance_object_verylow,$STR_A3_TIME_TRIALS_MISCTT_ROF_25,$STR_3DEN_ATTRIBUTES_SPEEDMODE_NORMAL,$STR_A3_TIME_TRIALS_MISCTT_ROF_21}; //texts[]={"Very Low","Low","Normal","High"};
        default = 200;
    };
    class btc_p_rep_notify { // Show reputation change above of:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SHOWREP"]);
        values[]={-1, 0, 1, 2, 3, 5, 10, 25, 50, 100, 200};
        texts[]={$STR_DISABLED, 0, 1, 2, 3, 5, 10, 25, 50, 100, 200};
        default = 3;
    };
    class btc_p_city_radiusOffset { // Spawn city radius offset:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_SPAWNRAD"]);
        values[]={0,1,2,3,4,5,6,7,8};
        texts[]={"0 m","100 m","200 m",$STR_BTC_HAM_PARAM_OTHER_SPAWNRAD_DEF,"400 m","500 m (Takistan)","600 m","700 m","800 m"}; // texts[]={"0 m","100 m","200 m","300 m","400 m","500 m (Takistan)","600 m","700 m","800 m"};
        default = 3;
    };
    class btc_p_trigger { // Disable city activation when a plane or helicopter (>190Km/h) is flying above:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DISABLESPAWN"]);
        values[]={0,1};
        texts[]={$STR_DISABLED,$STR_ENABLED};
        default = 0;
    };
    class btc_p_city_free_trigger { // City will be free if number of enemies is equal or lower than:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_CITYFREE"]);
        values[]={0,1,2,3};
        texts[]={$STR_DISABLED,"1","2","3"};
        default = 0;
    };
    class btc_p_flag { // Allow the use of flag:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_ALLOWFLAG"]);
        values[]={0,1,2,3};
        texts[]={$STR_DISABLED,$STR_BTC_HAM_PARAM_OTHER_FLAGVEH,$STR_BTC_HAM_PARAM_OTHER_FLAGVEHLEADER,$STR_BTC_HAM_PARAM_OTHER_FLAGVEHPLAYER};
        default = 1;
    };
    class btc_p_debug { // Debug:
        title = __EVAL(format ["      %1", localize "STR_BTC_HAM_PARAM_OTHER_DEBUG"]);
        values[]={0,1,2};
        texts[]={$STR_DISABLED,$STR_ENABLED, $STR_BTC_HAM_PARAM_OTHER_DEBUG_LOGONLY}; // texts[]={"Off","On","Log only"};
        default = 0;
    };
};
