#include<stdio.h>
int main()
{
    float a;

    printf("***** Grade  *****\n");
    printf("Enter a Percentage (%%) :- ");
    scanf("%f",&a);

    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80)
    {
        printf("Grade B");
    }
    else if(a>=70)
    {
        printf("Grade C");
    }
    else if(a>=60)
    {
        printf("Grade D");
    }
    else if(a>=50)
    {
        printf("Grade E");
    }
    else if(a>=40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Fail...");
    }
    return 0;
}