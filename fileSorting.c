#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// function prototypes
void sort(int *arr[], int size);

int main()
{
	//variable definitions
	int lineCounter = 0;
	int i = 0;
	FILE* in;
	FILE* out;
	in = fopen("input.txt","r");
	int temporary;
	int* nullPointer = &temporary;

	//counting lines in file
	while (!feof(in))
	{
		fscanf (in,"%d",nullPointer);
		lineCounter++;
	}

	lineCounter -= 1;

	//arrays to fill numbers
	int arr[lineCounter];
	int *ptr_arr[lineCounter];

	//back to the beginning of file
	in = fopen("input.txt","r");

	//read numbers and fill into array
	while (!feof(in))
	{
		fscanf (in,"%d",&arr[i]);
		i++;
	}

	//create an array of pointers to numbers
	for(i = 0; i < lineCounter; i++)
	{
		ptr_arr[i] = &arr[i];
	}

	sort(ptr_arr, lineCounter);

	out = fopen("output.txt","w+");

	//print sorted numbers
	for(i = 0; i < lineCounter; i++)
	{

		fprintf(out,"%d\n",arr[i]);

	}

	fclose(in);
	fclose(out);

	return 0;
}


void sort(int *arr[], int size)
{
	int i, i_2;
	int temp;
	for(i_2 = 0; i_2 < (size - 1); i_2++)
	{
		for(i = 0; i < (size - 1); i++)
		{
			if(*arr[i] > *arr[i+1])
			{ // swap elements (bubble sorting)
				temp = *arr[i];
				*arr[i] = *arr[i+1];
				*arr[i+1] = temp;
			}
		}
	}
}
