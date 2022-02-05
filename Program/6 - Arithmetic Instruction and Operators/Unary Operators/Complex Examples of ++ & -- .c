//#include<stdio.h>
//int main()
//{
//    int x = 10, y=20, z;
//    printf("x = 10, y = 20, z\n");
//    z = x++ * --y;
//    printf("X = %d , Y = %d , Z = %d", x, y, z);
//    return 0;
//}
/*
Work :- this expression z = x++ * –y; ma total assignment , post increment or pre-decrement che .
		PRIORITY :- pre - decrement --> assignment --> post increment  
		
		1. PRE DECREMENT 	Y = 20         =>     --y       =>  Y = 19
		2. ASSIGNMENT    	Z = x++ * --y  =>   Z = 10*19 	=>  Z = 190	
		3. POST INCREMENT	X = 10		   =>     x++       =>	x = 11		
*/





//#include<stdio.h>
//int main()
//{
//    int x = 5;
//    x = ++x + x++;
//    printf("%d", x);
//    return 0;
//}
/*
Work :- this expression x=++x + x++; ma total assignment , post increment or pre-increment che .
		PRIORITY :- pre - incremnet --> assignment --> post increment  
		
		1. PRE INCREMENT 	X = 5         =>     ++x       =>  X = 6
		2. ASSIGNMENT    	x = x + x     =>   X = 6+6 	   =>  X = 12	
		3. POST INCREMENT	X = 13		  =>     x++       =>  x = 13    Final Value	
*/



//
#include<stdio.h>
int main()
{
    int a = 2, b = 3;
    b = a++ + b--;
    a = a-- + ++b;
    b = ++a + --b;
    printf("A = %d, B = %d", a, b);
    return 0;
}






//#include<stdio.h>
//int main()
//{
//    int a = 5;
//    a = a+++a;
//    printf("%d", a);
//    return 0;
//}
//







