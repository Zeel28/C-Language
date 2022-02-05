#include<stdio.h>
int main()
{
    int a,b,c;
    printf("***** Find Greatest of Three Number *****\n");

    printf("Enter First Number :- ");
    scanf("%d",&a);
    printf("Enter Second Number :- ");
    scanf("%d",&b);
    printf("Enter Third Number :- ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is Greatest Number ...",a);
    }
    if(b>a && b>c)
    {
        printf("%d is Greatest Number...",b);
    }
    if(c>a && c>b)
    {
        printf("%d is Greatest Number...",c);
    }
    if(a==b && b==c && a==c)
    {
        printf("First, Second and Third Number are equal .. " );
    }
    return 0;
}