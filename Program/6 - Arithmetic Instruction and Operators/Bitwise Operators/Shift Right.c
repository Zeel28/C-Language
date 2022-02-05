#include<stdio.h>
int main()
{
		printf("***** >> (Bitwise Shift Right OPERAT0R ) *****\n\n");
    int a;

    a = 56>>3;
    printf("Shift Right ( >> ) :- %d",a);
    return 0;
}
/* 64 complier base 
	
	1 int ==> 8 bytes ==> 32 bit

56 = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 0 0 0
                                                         ____________ = 56
		56 << 2;
	 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 |0 0 0|    |1 1 1| |0 0 0 |    
                                                                      |__7__| |DELETE| 
										                   |__3__| >> |_____ 56______|   
*/
