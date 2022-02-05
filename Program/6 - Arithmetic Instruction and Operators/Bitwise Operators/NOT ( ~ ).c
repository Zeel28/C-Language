#include<stdio.h>
int main()
{
	    printf("***** ~ ( Bitwise NOT OPERAT0R ) *****\n\n");
	int a,b;
	
	printf("Formula of NOT operators ~N = -(N+1) \n\n");
	a=~5;
	printf("Output A :- %d\n",a);
/*	~N = -(N+1)
	~5 = -(5+1)
	~5 = -(6)
	~5 = -6
*/

	b=~-5;
	printf("Output A :- %d",b);
/*	~N = -(N+1)
	~-5 = +(-5-1) 			- - = +(- + = -)
	~-5 = +(4)
	~-5 = +4
*/
	return 0;
}
