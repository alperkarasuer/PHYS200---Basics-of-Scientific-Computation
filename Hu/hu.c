#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int main()
{
	int a;
	char command[18];
	strcpy(command,"cmdmp3 sonmez.mp3");
	
	while(1)
	{
		printf("\nLutfen pozitif bir sayi giriniz: ");
		scanf("%d",&a);
		if(a < 0)
		{
			
		system(command);

		}
		
		else
			break;

	
	}
	
    return 0;

}
