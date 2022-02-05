/*
01234
0123
012
01
0
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;
	char c;
	
	printf("Enter a Number :- ");
	scanf("%d",&num);
	
	for(i=num;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	fflush(stdin);
	scanf("%c",&c);
	return 0;
}
