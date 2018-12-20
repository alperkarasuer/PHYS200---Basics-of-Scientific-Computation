#include <sodium.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
int generateRandomNumber();


int main()
{
	assert(sodium_init >= 0);
    long stepNumber;
    printf("Enter step count for particle: ");
    scanf("%ld",&stepNumber);
    int i, randomNumber;
	long x,y;
	x = y = 0;

	FILE* fp;

	fp = fopen("output.txt","w+");

	fprintf(fp,"%d %d\n",x,y);

    for(i = 1; i <= stepNumber; i++)
    {

        randomNumber = generateRandomNumber()%4 + 1;


        if(randomNumber == 1)
	{
		x+=1;
	}
	else if(randomNumber == 2)
        {
        	y-=1;
        }

        else if(randomNumber == 3)
	{
		x-=1;
	}


        else if(randomNumber == 4)
	{
		y+=1;
	}

		fprintf(fp,"%d %d\n",x,y);

    }


	fprintf(fp,"Distance to origin: %lf",sqrt(x*x + y*y));

	fclose(fp);

    return 0;

}




int generateRandomNumber()
{
	uint32_t myInt = randombytes_uniform(4);
    return myInt;
}
