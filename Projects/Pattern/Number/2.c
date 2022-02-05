/*
0
01
012
0123
01234
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

    for ( i = 0; i<=num; i++)
    {
        for (j = 0; j<=i; j++)
        {
            printf("%d",j);/* code */
        }
        printf("\n");/* code */
    }
    printf("\n\n DO YOU WANT TO CONTINUE [ Y / N ] : ");
    fflush(stdin);
    scanf("%c",c);    
 return 0;   
}
