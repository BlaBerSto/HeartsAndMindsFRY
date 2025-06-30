params ["_toilet"];
if ((_toilet distance bucket) < 2) then {
    player action ["SWITCHWEAPON", player, player, -1];
	sleep 3;
	player playMove "AinvPknlMstpSnonWnonDnon_medic0";
	sleep 5;
	player playMove "AinvPknlMstpSnonWnonDnon_medic0";
	sleep 5;
	player playMove "AinvPknlMstpSnonWnonDnon_medic0";
	sleep 5;
	player playMove "AinvPknlMstpSnonWnonDnon_medic0";
	sleep 5;
	player switchMove "AmovPknlMstpSnonWnonDnon";
} else {
    hint "Can't do that without the shit bucket, pal.";
};