#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sort(int *arr[], int size);

int main()
{
	int lineCounter = 0;
	int j = 0;
	FILE *fp;
	fp = fopen("input.txt","r");
	int temporary;
	int* nullPointer = &temporary;


	while (!feof(fp))
	{
		fscanf (fp,"%d",nullPointer);
		lineCounter++;
	}

	lineCounter -= 1;

	int arr[lineCounter];
	int *ptr_arr[lineCounter];

	fp = fopen("input.txt","r");

	while (!feof(fp))
	{
		fscanf (fp,"%d",&arr[j]);
		j++;
	}

	for(j = 0; j < lineCounter; j++)
	{
		ptr_arr[j] = &arr[j];
	}

	sort(ptr_arr, lineCounter);

	for(j = 0; j < lineCounter; j++)
	{

		printf("%d ",arr[j]);

	}



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
			{ // swap elements ( bubble sorting)
				temp = *arr[i];
				*arr[i] = *arr[i+1];
				*arr[i+1] = temp;
			}
		}
	}
}
