#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{	//Saturn V rocket - F1 Engine
	const double timestep = 0.000000000000000000000001;
	double gravitationalAcceleration;
	const double burnRate = 12890;
	const double specificImpulse = 263 ;
	double exhaustVelocity = specificImpulse*gravitationalAcceleration;
	const double dryMass = 208606;
	const double totalMass = 2970000;

	printf("Enter gravitational acceleration at location: ");
	scanf("%lf",%gravitationalAcceleration);





	return 0;
}
