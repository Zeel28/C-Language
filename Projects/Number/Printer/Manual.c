#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	printf("****** Manual Printer *****\n");
	
	float start,end;
	int i,b,c;
	 
	printf("Enter a Start at :- ");
	scanf("%f",&start);
	printf("Enter a end at :- ");
	scanf("%f",&end);
		
	for(i=start;i<=end;i++)
	{
		printf("\t %d \n",i);
	}
	return 0;
}
