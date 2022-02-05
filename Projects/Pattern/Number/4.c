/*
4
3 4
2 3 4
1 2 3 4
0 1 2 3 4
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;

	printf("Enter a Number :- ");
	scanf("%d",&num);
	printf("\n");
	
	for(i=num;i>=0;i--)
	{
		for(j=i;j<=num;j++)
		{
		 	printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}
