#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



void delay(double howLong);

int main(int argc, char* argv[])
{	
	//Saturn V rocket - F1 Engine
	const double earthMass =  5.972E24;
	const double BigG = 6.67408E-11;
	const double timestep = 0.1; // time resolution
	const double burnRate = 12890; // 2578 per engine times 5 - wikipedia
	const double specificImpulse = 263 ; // wikipedia
	const double totalMass = 2950000;
	double velocity, earthRadius, time;

	printf("Enter Earth's radius at location in meters: ");
	scanf("%lf",&earthRadius);

	double gravitationalAcceleration = BigG*earthMass/(earthRadius*earthRadius);
	double exhaustVelocity = specificImpulse*gravitationalAcceleration;
	double escapeVelocity = sqrt((2*BigG*earthMass)/earthRadius);


	for(time = 0; velocity <= escapeVelocity; time += timestep )
	{

		velocity = exhaustVelocity*log(totalMass/(totalMass-burnRate*time));
		printf("At time %.3lf seconds speed of the rocket is %.4lf meters per second\n",time,velocity);
		delay(timestep);

	}

	return 0;
}


void delay(double howLong)
{
	howLong *= 1000;
	clock_t startTime = clock();

	while(clock() < startTime + howLong);

}
