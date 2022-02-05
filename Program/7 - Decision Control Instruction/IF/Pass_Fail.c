#include<stdio.h>
int main()
{
    //If the CONDITION is evaluated to TRUE, statements inside the body of IF ARE EXECUTED.
    //If the CONDITION is evaluated to FALSE, statements inside the body of IF ARE NOT EXECUTED.

/* Syntax : if (condition) 
            {
                // code
            }
*/
    float a;   
    printf("Enter a Marks : ");
    scanf("%g",&a);

    if (a>=35) 
    {
        printf("Congrats you are pass !! \3\3");
    }
    if (a<35)
    {
        printf("You are Fail");
    }
    
    return 0;
}