/*
5 4 3 2 1 0 
4 3 2 1 0
3 2 1 0
2 1 0
1 0
0
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 	char c;   
	int i,j,num;
    
    printf("Enter a number :- ");
    scanf("%d",&num);

	for(i=num;i>=0;i--)
	{
	
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
    
    printf("\n\n DO YOU WANT TO CONTINUE [ Y / N ] : ");
    fflush(stdin);
    scanf("%c",c);    
 return 0;   
}
