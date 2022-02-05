#include<stdio.h>
int main()
{
    float a;   
    printf("Enter a Number :- ");
    scanf("%g",&a);
    if(0<a)
    {
        printf("%g is a Positive number ! ! \2 \2",a);
    }
    else if (0>a)
    {
        printf("0 is neither Positive nor Negative");
    }
    else
    {
        printf("%g is a Negative number !!");
    }
    return 0;
}
