#include<stdio.h>
int main()
{
while(1)
{

	float celsius,fahrenheit;

    printf("\nTemperature in Celsius : ");
    scanf("%f",&celsius);

    fahrenheit = ((9*celsius)/5) + 32 ;    // Formula for conversion

    printf("\nTemperature in Fahrenheit : %f\n\n",fahrenheit);
}
	return 0;
}
