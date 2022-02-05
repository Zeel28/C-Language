#include<stdio.h>
int main()
{
    
    float a,b,c;
    printf("***** Find Maximum Number *****\n");

    printf("Enter a First Number :- ");
    scanf("%g",&a);
    printf("Enter a Second Number :- ");
    scanf("%g",&b);
    printf("Enter a Third Number :- ");
    scanf("%g",&c);
    if (a>b)
    {
        if(a>c) 
        {
            printf("%g is Maximum Number \2 ",a);
        }
        else
        {
            printf("%g is Maximum Number \2 ",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("%g is Maximum Number  \3 ",b);
        }
        else
        {
            printf("%g is Maximum Number \4 ",c);
        }
        
    }
    return 0;
}