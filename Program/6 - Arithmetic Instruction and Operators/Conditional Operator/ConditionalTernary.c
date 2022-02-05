#include<stdio.h>
int main()
{
	/* Syntax:
	          variable = Expression1 ? Expression2    : Expression3
		                  condition  ? true-statement : false-statement ;
    ==> Expr 1 ma condition aa lakhva ma ave che no te condition TRUE thai no expression 2 execute thai che 
	                                             no te condition FALUE thai to expression 3 execute thai che .

	*/
	int a;

	printf("***** Condition / Ternary Operator *****\n");

	a=5>4?printf("5"):printf("4");
/* - a ae variable che  
   - 5>4(expr 1/condition) 
   - ?
   - printf("5")      printf() ma semicolon nahi aave. 
   - : 
   - printf("4")
   - ; 
*/
    
    printf("Ex : 1\n\n");
    int x;
    x= 4>3? 1,2,3:4,5,6;
    printf("ANS : %d\n",x);
// x= 4>3? 1,2,3:4,5,6; mujab conditional operator ma VALUE TURE thai no : tarat pahe ma nu execute kar se 
//														and FALUE thase to : pachi nu tarta pachi nu execute tha se. 	
	
	return 0;
}