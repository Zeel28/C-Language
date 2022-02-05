/*
A
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;
	char c;
	
	printf("Enter number :- ");
	scanf("%d",&num);

	for(i=65;i<num+65;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
	printf("\n\n hey press any \3\3\3\3\3");
	fflush(stdin);
	scanf("%c",c);
	
	
	return 0;
}
