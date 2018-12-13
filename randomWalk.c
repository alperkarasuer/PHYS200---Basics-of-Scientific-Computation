#include <sodium.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

int generateRandomNumber();


int main()
{

    assert(sodium_init >= 0);
    long stepNumber;
    long stepSize;
    int i;
    double endReal = 0, endImag = 0;
    double randomNumber;

    printf("Enter step count for particle: ");
    scanf("%ld",&stepNumber);
    printf("Enter maximum allowed travel for each direction: ");
    scanf("%ld",&stepSize);
    printf("Largest possible vector length is: %lf\n", sqrt(2)*stepSize );

    double complex stepsTaken[stepNumber];

    for(i = 0; i < stepNumber; i++)
    {
        
        randomNumber = generateRandomNumber();
        stepsTaken[i] = cos(randomNumber*M_PI/180) + sin(randomNumber*M_PI/180)*I;

    }



    for(i = 0; i < stepNumber; i++)
    {

        endReal += creal(stepsTaken[i]);
        endImag += cimag(stepsTaken[i]);

    }


    printf("%.2lf + %.2lfi\n",endReal,endImag);
    printf("Distance from origin is: %lf "),sqrt(endReal*endReal + endImag*endImag);


    return 0;

}




int generateRandomNumber()
{
    uint32_t maxSize = howMany;
    uint32_t myInt = randombytes_uniform(360);
    return myInt;
}
