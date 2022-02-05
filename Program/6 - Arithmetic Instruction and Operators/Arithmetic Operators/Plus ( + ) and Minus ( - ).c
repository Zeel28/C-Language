#include<stdio.h>
int main()
// Use :- Unary plus(+) and Unary Minus(-) no use pahe la varible ma digti positive ke Negative kari shakay che 
{
	int A=5,B=-10;
	A=-A;				// A ni value "+5" che A=-A; kar ta "+ - => -"(+5 -5 = -5) thay che   
	printf("%d\n",A);   // atle A ni value "+5" mathi "-5" thay che A ma "-5" print thay che .
	
	A=+A;				// A ni value A=-A;("+ - => -") kar ta A ni value "+5" mati "-5" thai and have A=+A; karta "- + => -"(-5 +5 = -5) thay che 
	printf("%d\n",A);   // atle A ni value "-5" ni "-5" rahe she. A ma "-5" print thashe.
	
	A=-A;				// A ni A=+A;("- + => -") kar ta A ni value "-5" ni "-5" rahe che and have A=-A; kar ta "- - => +"(-5 -5 => +5) thuy che 					
	printf("%d\n\n",A);	// atle A ni value "-5" ni "+5" rahe she. A ma "+5" print thashe.
	
	
	
	B=+B;				// B ni value "-10" che B=+B; kar ta "- + => -"(-10 +10 = -10) thay che. 		
	printf("%d\n",B);   // atle B ni value "-10" mathi "-10" thay che B ma "-10" print thay che.
	
	B=-B;				// B ni value B=+B;("- + => -") kar ta B ni value "-10"  ni "-10" rahe che and have B=-B; kar ta "- - => +"(-10 -10 = +10) thay che 
	printf("%d\n",B);   // atle B ni value "-10" mathi "+10" tahy che B ma "+10" print thay che.

	return 0;
}
