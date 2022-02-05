/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,num;
	char c;

	printf("Enter a Number :-");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
	
		for(j=0;j<=i;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
	
	fflush(stdin);
	scanf("%c",&c);
	return 0;
}
