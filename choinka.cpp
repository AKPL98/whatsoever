#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctime>
void kolorek(int n) 
{
	HANDLE kolor;
	kolor = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( kolor, n );	
}
void pieniek()
{
	kolorek(15);
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<147;j++)
		{
			if(j<80 && j>68)
			{
				kolorek(4);
				printf("|");
				kolorek(15);
			}
			else
				printf("-");
		}
		printf("\n");
	}
	kolorek(0);
}
void hoinka()
{
	srand(time(NULL));
	int i,j;
	kolorek(15);
   for (i=0;i<30;i++)
   {
	   for (j=0;j<147;j++)
	   {
		   	if (j+i>=74 && j-i<=74)
		   	{
		   		int k=rand();
		   		if(j%3==0)
		   		{
		   		kolorek(k);
				printf("*");
				kolorek(15);
				}
				else
				{
			   	kolorek(10);
				printf("*");
				kolorek(15);
				}
			}
		   	else
		   	{
		   		printf("-");
		   	}
		}
   printf("\n");
	}
	kolorek(0);
}
int main()
{
	hoinka();
	pieniek();
	return 0;
}


