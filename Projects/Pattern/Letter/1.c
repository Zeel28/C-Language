/*
E E E E E
D D D D
C C C 
B B
A 

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

	for(i=num+65;i>=65;i--)
	{
	
		for(j=i;j>=65;j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
    
    printf("\n\n DO YOU WANT TO CONTINUE [ Y / N ] : ");
    fflush(stdin);
    scanf("%c",c);    
 return 0;   
}
