#include <sodium.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>
#include <math.h>


int generateRandomNumber(int howMany);


int main()
{

    assert(sodium_init >= 0);
    long stepNumber;
    long stepSize;
    int i;
    double endReal = 0, endImag = 0;


    printf("Enter step count for particle: ");
    scanf("%ld",&stepNumber);
    printf("Enter maximum allowed travel for each direction: ");
    scanf("%ld",&stepSize);
    printf("Largest possible vector length is: %lf\n", sqrt(2)*stepSize );

    double complex stepsTaken[stepNumber];

    for(i = 0; i < stepNumber; i++)
    {

        stepsTaken[i] = generateRandomNumber(stepSize) + generateRandomNumber(stepSize)*I;

    }



    for(i = 0; i < stepNumber; i++)
    {

        endReal += creal(stepsTaken[i]);
        endImag += cimag(stepsTaken[i]);

    }


    printf("%.2lf + %.2lfi",endReal,endImag);



    return 0;

}




int generateRandomNumber(int howMany)
{
    uint32_t maxSize = howMany;
    uint32_t myInt = randombytes_uniform(maxSize);
    return myInt;
}
