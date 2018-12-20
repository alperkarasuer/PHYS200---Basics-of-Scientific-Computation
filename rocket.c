#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BigG 0.000000000067408L
#define EarthMass 5973600000000000000000000L

int main(int argc, char* argv[])
{	//Saturn V rocket - F1 Engine
	const double timestep = 0.000000000000000000000001;
	const double burnRate = 12890;
	const double specificImpulse = 263 ;
	const double dryMass = 208606;
	const double totalMass = 2970000;
	double velocity, earthRadius, i;

	printf("Enter Earth's radius at location: ");
	scanf("%lf",&earthRadius);
	
	double gravitationalAcceleration = BigG*EarthMass/(earthRadius*earthRadius);
	double exhaustVelocity = specificImpulse*gravitationalAcceleration;
	double escapeVelocity = sqrt((2*BigG*EarthMass)/earthRadius);


	for(i = 0; velocity <= escapeVelocity; i += 0.000000000000000000000001)
	{

		velocity = exhaustVelocity*log(totalMass/(totalMass-burnRate*i));

	}


	
	printf("%lf",i);




	return 0;
}
