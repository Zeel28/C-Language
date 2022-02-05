#include<stdio.h>
int main()
{
	// \r carriage return
	
	/*\r thi cursor line ni starting ma aave che*/ 
	/*====>  and \r ni pachi 4letter no word hoy to starting na 4 letter 
			shivay na letter print thay che */
	/*====> Example :- \r thu cursor line 2 ni starting ma aav se and \r pachi BHAN(4 letter) che
						to staring na 4 letter I_AM_(4 letter) print thase nahi and ZEEL print thase 
						( Line 2)*/
	/*====> Example :- bhanderi ma i pachi space hoy to \r tart pahela no letter print thase nahi 
						( Line 1)*/		
			
	printf("i am zeel\rbhanderi \n");  // Line 1
	printf("I_AM_ZEEL\rBHAN");     // Line 2
	return 0;
}
// #include <stdio.h>
// #include <unistd.h>
//
// int main()
// {
//         char chars[] = {'-', '\\', '|', '/'};
//         unsigned int i;
//         for (i = 0; ; ++i) {
//                 printf("%c\r", chars[i % sizeof(chars)]);
//                 fflush(stdout);
//                 usleep(200000);
//         }
//
//        return 0;
// }
