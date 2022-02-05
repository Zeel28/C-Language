#include<stdio.h>
int main()
{
		printf("***** << (Bitwise Shift Left OPERAT0R ) *****\n\n");
	int a;
	a=56<<3;
	printf("Shift Left :- %d",a);
	return 0;
}
/* 64 complier base 
	
	1 int ==> 8 bytes ==> 32 bit

56 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 0 0 0
                                                         ____________ = 56
		56 << 3;
	 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 |0 1 1 1 0 0 0|   |0 0 0|
                                                |______56______|<<|__3__| = 448   
*/
