/*
F E D C B A
E D C B A
D C B A
C B A
B A
A
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;
	char c;
	
	printf("Enter number :- ");
	scanf("%d",&num);
	
	for(i=num+64;i>=65;i--)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	fflush(stdin);
	scanf("%c",c);
	return 0;
}
