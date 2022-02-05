#include <stdio.h>
int main()
{
char A[20];
int b;
printf("\t***** GIVEN NAME TO ASCII VALUE ***** \n\n");
printf("Please enter you name to know your name ASCII values: ");
scanf("%s", A);

for(b = 0;A[b]!='\0';b++)  // iterating array characters sequentially
	{
	//display the your name character ASCII values
	printf("\n\tThe ASCII value of character  %c  is  %d", A[b],A[b]);
	
	}
	return 0;
}
