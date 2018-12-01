#include <assert.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <conio.h>
long findSeconds(int n);
void delay(int number_of_seconds);




int main(int argc, char* argv[])
{

    time_t secondsFirst, secondsSecond;
    secondsFirst = time(NULL);

    long secondOne, secondTwo;
    secondOne = findSeconds(secondsFirst);

    printf("%ld ", secondOne);

    delay(3);


    secondsSecond = time(NULL);

    secondTwo = findSeconds(secondsSecond);

    printf("%ld", secondTwo);






    return 0;
}


void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds) ;
}



long findSeconds(int n)
{

    n = ((((n % 31540000) % 2628000) % 86400) % 3600) % 60; //saniye

    return n;

}

