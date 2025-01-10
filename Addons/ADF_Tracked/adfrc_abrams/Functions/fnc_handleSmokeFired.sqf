// by commy2, based on BI's smoke script

_this spawn {
    _vehicle = _this select 0;
    _count = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "smokeLauncherGrenadeCount");

    _i = 0;
    while {_i < _count} do {
        _i = _i + 1;
        _smokePos = _vehicle selectionPosition format ["smoke%1_Pos", _i];
        _smokeDir = _vehicle selectionPosition format ["smoke%1_Dir", _i];

        _smokeSpawn = [
            (_smokePos select 0) + 4 * ((_smokeDir select 0) - (_smokePos select 0)),
            (_smokePos select 1) + 4 * ((_smokeDir select 1) - (_smokePos select 1)),
            (_smokePos select 2) + 4 * ((_smokeDir select 2) - (_smokePos select 2))
        ];
        _smokePos = _vehicle modelToWorld _smokePos;
        _smokeDir = _vehicle modelToWorld _smokeDir;
        _shellDir = ((_smokeDir select 0) - (_smokePos select 0)) atan2 ((_smokeDir select 1) - (_smokePos select 1));
        _vehicleVelocity = velocity _vehicle;
        _shellVelocity = [
            18 * sin _shellDir + (_vehicleVelocity select 0),
            18 * cos _shellDir + (_vehicleVelocity select 1),
            12 + (_vehicleVelocity select 2)
        ];

        _smokeShell = "adfrc_SmokeShellVehicle" createVehicleLocal [0, 0, 0];
        _smokeShell setPos (_vehicle modelToWorld _smokeSpawn);
        _smokeShell setVectorDir (_shellVelocity call BIS_fnc_unitVector);
        _smokeShell setVelocity _shellVelocity;
        _smokeShell say3D "adfrc_SmokeLauncher_Fire";

        drop [
            ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 1, 16],
            "",
            "Billboard",
            1,
            1.1,
            _smokeDir,
            [0, 0, 0.5],
            0,
            1.275,
            1,
            0.025,
            [0.72, 1.68, 2.4, 2.88, 3.36, 3.84, 4.32],
            [[0.9, 0.9, 0.9, 0.144], [0.9, 0.9, 0.9, 0.0648], [0.9, 0.9, 0.9, 0.0216], [0.9, 0.9, 0.9, 0.0018]],
            [0.2],
            1,
            0.04,
            "",
            "",
            ""
        ];
        _smokeShell spawn {
            sleep 1.2;

            _soundSource = "#lightpoint" createVehicleLocal getPos _this;
            _soundSource setLightBrightness 0;
            _soundSource say3D "adfrc_SmokeLauncher_Explosion";

            _light = "#lightpoint" createVehicleLocal getPos _this;
            _light setLightBrightness 0.5;
            _light setLightAmbient [0.5, 0.5, 0.5];
            _light setLightColor [0.5, 0.5, 0.5];
            _light setLightDayLight true;

            drop [
                ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 2, 32],
                "",
                "Billboard",
                0.1,
                0.12,
                getPos _this,
                [0.5, 0.5, 0.5],
                0,
                1.277,
                8,
                0.075,
                [0.1, 3],
                [[1, 1, 1, -2], [1, 1, 1, -2], [1, 1, 1, -1], [1, 1, 1, -0]],
                [3 + random 2],
                1,
                0,
                "",
                "",
                ""
            ];

            for "_i" from 1 to 4 do {
                _shellVelocity = velocity _this;

                switch (_i) do {
                    case 1 : {_shellVelocity = [-0.5 * (_shellVelocity select 1), 0.5 * (_shellVelocity select 0), 5]};
                    case 2 : {_shellVelocity = [-0.5 * (_shellVelocity select 1), 0.5 * (_shellVelocity select 0), -5]};
                    case 3 : {_shellVelocity = [0.5 * (_shellVelocity select 1), -0.5 * (_shellVelocity select 0), 5]};
                    case 4 : {_shellVelocity = [0.5 * (_shellVelocity select 1), -0.5 * (_shellVelocity select 0), -5]};
                };

                _smokeShell = "adfrc_SmokeShellSubVehicle" createVehicleLocal [0, 0, 0];
                _smokeShell setPos (getPos _this);
                _smokeShell setVectorDir (_shellVelocity call BIS_fnc_unitVector);
                _smokeShell setVelocity _shellVelocity;

                _smokeShell spawn {
                    sleep 0.2;

                    _smoke1 = "#particlesource" createVehicleLocal getpos _this;
                    _smoke1 setParticleParams [
                        ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48, 1],
                        "",
                        "Billboard",
                        1,
                        10,
                        [0, 0, 0],
                        [0, 0, 0.5],
                        0,
                        1.277,
                        1,
                        0.025,
                        [0.5, 8, 12, 15],
                        [[1, 1, 1, 0.7], [1, 1, 1, 0.5], [1, 1, 1, 0.25], [1, 1, 1, 0]],
                        [0.2],
                        1,
                        0.04,
                        "",
                        "",
                        _this
                    ];
                    _smoke1 setParticleRandom [2, [0.3, 0.3, 0.3], [1.5, 1.5, 1], 20, 0.2, [0, 0, 0, 0.1], 0, 0, 360];
                    _smoke1 setDropInterval 0.2;

                    _smoke2 = "#particlesource" createVehicleLocal getpos _this;
                    _smoke2 setParticleParams [
                        ["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 7, 0],
                        "",
                        "Billboard",
                        1,
                        5,
                        [0, 0, 0],
                        [0, 0, 0.5],
                        0,
                        1.277,
                        1,
                        0.025,
                        [0.5, 8, 12, 15],
                        [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0.5], [1, 1, 1, 0]],
                        [0.2],
                        1,
                        0.04,
                        "",
                        "",
                        _this
                    ];
                    _smoke2 setParticleRandom [2, [0.3, 0.3, 0.3], [1.5, 1.5, 1], 20, 0.2, [0, 0, 0, 0.1], 0, 0, 360];
                    _smoke2 setDropInterval 0.15;

                    sleep (55 + random 3);
                    deleteVehicle _this;
                };
            };
            deleteVehicle _this;
            sleep 0.12;
            deleteVehicle _light;
            sleep 2;
            deleteVehicle _soundSource;
        };
        sleep (0.05 + random 0.05);
    };
};
nil
