#include<stdio.h>
int main()
{
    printf("\4\4\4\4\4\4 Average Program \4\4\4\4\4\4 \n\n");
    
    float a,b,c,d,e,g,P;

    printf("Enter the 1 Number :- ");
    scanf("%g",&a);
    printf("Enter the 2 Number :- ");
    scanf("%g",&b);
    printf("Enter the 3 Number :- ");
    scanf("%g",&c);
    printf("Enter the 4 Number :- ");
    scanf("%g",&d);
    printf("Enter the 5 Number :- ");
    scanf("%g",&e);
 //   printf("Enter the 6 Number :- ");
 //   scanf("%g",&f);

    g=a+b+c+d+e;
    P = (g*100)/600;
	
	printf("\n\nTotal :- %g",g);
    printf("\nAverage :- %g",g/5);
    printf("\nPercentage :- %f",P);
    return 0;
}
