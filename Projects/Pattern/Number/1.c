/*
1
22
333
4444
55555
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

    for ( i = 0; i<num; i++)
    {
        for (j = 0; j<i; j++)
        {
            printf("%d",i);/* code */
        }
        printf("\n");/* code */
    }
    printf("\n\n DO YOU WANT TO CONTINUE [ Y / N ] : ");
    fflush(stdin);
    scanf("%c",c);    
 return 0;   
}
