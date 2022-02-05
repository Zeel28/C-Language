/*
0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;
	char c;

	printf("Enter a number :- ");
	scanf("%d",&num);
	
	for (i=0;i<=num;i++)
	{
			for(j=i;j>=0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	fflush(stdin);
	scanf("%c",c);
	return 0;
}
