params ["_bucket"];
// Center object (replace or define as needed)

// Create fire and smoke vehicles locally (to reduce network load)
// _fire = "FireSmokeSmall" createVehicleLocal getPos _bucket;
 _smoke = "SmokeShell" createVehicleLocal getPos _bucket;

// Attach effects to the object
// _fire attachTo [_bucket, [0,0,0]];  // Attach at object's origin (can adjust offset)
 _smoke attachTo [_bucket, [0,0.4,0]];

// After 30 seconds, delete the effects
[_smoke] spawn {
    param["_smoke"];
	sleep 3;
    // deleteVehicle _fire;
    deleteVehicle _smoke;
};