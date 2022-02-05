#include<stdio.h>
int main()
{
    /*
        If the CONDITION is evaluated to TRUE, 
            IF(ii) the CONDITION is evaluated to TRUE, 
                STATEMENT 1 inside the body of IF(ii) ARE EXECUTED.
            IF(ii) the CONDITION is evaluated to FALSE, 
                STATEMENT 2 inside the body of IF(ii) ARE EXECUTED.
        IF the CONDITION is evaluated to FALSE, 
            IF(iii) the CONDITION is evaluated to TRUE,
                STATEMENT 3 inside the body of IF(iii) ARE EXECUTED.
            IF(iii) the CONDITION is evaluated to FALSE, 
                STATEMENT 4 inside the body of IF(iii) ARE EXECUTED.    
*/
/* Syntax : if (condition) 
            {
                if(ii)(condition)
                {
                    statement 1;
                }
                else
                {
                    statement 2;
                }
            }
            else
            {
                if(iii)(condition)
                {
                    statement 3;
                }
                else
                {
                    statement 4;
                }
            }
*/
    
    
    int a,b,c;
    printf("***** Find Greatest of Three Number *****\n");

    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    printf("Enter Third Number :- ");
    scanf("%d",&c);
    
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Geratest number...",a);
        }
        else
        {
            printf("%d is Geratest number...",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Geratest number...",b);
        }
        else
        {
            printf("%d is Geratest number...",c);
        }
    }
    return 0;
}