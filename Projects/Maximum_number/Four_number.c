#include<stdio.h>
int main()
{
    
    printf("***** Four Number *****\n");
    
    float a,b,c,d;
    printf("Enter a First Number :- ");
    scanf("%g",&a);
    printf("Enter a Second Number :- ");
    scanf("%g",&b);
    printf("Enter a Third Number :- ");
    scanf("%g",&c);
    printf("Enter a Fourth Number :- ");
    scanf("%g",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("\n%g is Maximum Number !!",a);
			}
			else
			{
				printf("\n%g is Maximum Number !!",d);
			}
		}
		else
		{
			printf("\n%g is Maximum Number !!",c);
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("\n%g is Maximum Number !!",b);
			}
			else
			{
				printf("\n%g is Maximum Number !!",d);
			}
		}
		else if(c>d)
		{
			printf("\n%g is Maximum Number !!",c);
		}
		else
		{
			printf("\n%g is Maximum Number !!",d);
		}
	}
    return 0;
}
