// IF ELSE
#include<stdio.h>
int main()
{
/*
 How if...else statement works?
==> If the CONDITION is evaluated to TRUE,
    - statements inside the body of IF ARE EXECUTED.
    - statements inside the body of else are skipped from execution.
==> If the CONDITION is evaluated to FALSE,
    - statements inside the body of ELSE ARE EXECUTED.
    - statements inside the body of if are skipped from execution
*/ 

/* Syntax : if (condition) 
            {
                statement 1;
            }
            else
            {
                statement 2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
            }
*/  

    float a;
    printf("Enter a Marks : ");
    scanf("%g",&a);

    if(a>=35)
    {
        printf("Your a PASS !!\3\3");
    }
    else
    {
        printf("Your are Fail \2");
    }
    return 0;
}