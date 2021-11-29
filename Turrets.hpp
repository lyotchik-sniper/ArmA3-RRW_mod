		class Turrets
		{
			class MainTurret: NewTurret
			{
				stabilizedInAxes = 4;
				outGunnerMayFire = 1;
				memoryPointGun = "machinegun";
				body = "";
				gun = "";
				gunnerAction = "ManActTestDriverOut";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				soundServo[] = {"A3\sounds_f\dummysound",0.316228,1,15};
				minElev = -5;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				primaryGunner = 1;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				startEngine = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.5;
						explosionShielding = 0.4;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						explosionShielding = 0.2;
					};
				};
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewOptics
				{
				};
				disableSoundAttenuation = 1;
			};
		};