	class PlayerSteeringCoefficients /// steering sensitivity configuration
	{
		turnIncreaseConst	= 0; // basic sensitivity value, higher value = faster steering
		turnIncreaseLinear	= 0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
		turnIncreaseTime	= 0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

		turnDecreaseConst	= 0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
		turnDecreaseLinear	= 0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
		turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

		maxTurnHundred		= 0; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
	};