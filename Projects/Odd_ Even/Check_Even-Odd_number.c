#include<stdio.h>
int main()
{
    int a;
    
    printf("Enter a Number :- ");
    scanf("%d",&a);
    
    // Modulus (%) returns remainder
    if (a%2==0)
    {
        printf("%d Number is Even Number ! ! ",a);
    }
    else
    {
        printf("%d Your Number is Odd Number ! ! ",a);
    }


    return 0;
}