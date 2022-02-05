 
// Unary Operators

/*
    Operator = +,-,++,--          Note :-  ++ ne variable ni pachi lakho hoy to tene POST INCREMENT kahe che... 
                                       :-  ++ ne variable ni AAGAL lakho hoy to tene PRE INCREMENT kahe che... 
                                       :-  POST INCREMENT priority all operator kar ta oochi hoy che "assignment operator" kar ta pan
											

    ++  increment Operator      Use :- ++ thi variable ni value "1 increase" thay che         Ex:- x=3  ===>  x++  ===> x=4 
    --  decrement Operator      Use :- -- thi variable ni value "1 decrement" thay che        Ex:- x=3  ===>  x--  ===> x=3 
*/

/*
    Increment Operator :- increase the value of variable by 1 .
    Syntax: "a++"(Post increment operator) or "++a" (Pre increment operator) a++ or ++a is equivalent to a=a+1

    Decrement Operator :- decrease the value of variable by 1 .
    Syntax: "a--”(Post decrement operator) or "--a" (Pre decrement operator) a-- or --a is equivalent to a=a-1
*/

#include<stdio.h>
int main()
{
	printf("\t***** Unary Operator *****\n");
	printf("\t  ***** Increment *****\n");
    int x=5;
    printf("X = 5\n");
    x++;            // x(5) = x(5)+1 = x(6)   x++ thi x ni value "5" mathi increment thai ne "6" thay che 
                    // Post increment         variable ni "apachi" "++" hoy to tene POST INCREMENT kahe che
    printf("X(Post increment) = %d \n",x);

    ++x;            // x(6) = x(6)+1 = x(7)  ++x no use x++ ni jemj thay che
                    // Pre increment          variable ni "aage" "++"" hoy to tene "PRE INCREMENT" kahe che
    printf("X(Pre increment) = %d\n\n\n",x); // x++ thi x ni value "5" mathi "6" thai che and ++x no use x++ ni jem thay che tethi  x++ ni help thi aapde value "6" che atle ++x thi x ni value "7" thi





	printf("\t  ***** Decrement *****\n");
	int y=5;
	printf("Y = 5\n");
    y--;            // y(5) = y(5)-1 = y(4)  y-- thi y ni value "5" mathi decrement thai ne "4" thay che 
                    // Post increment         variable ni "apachi" "--" hoy to tene POST INCREMENT kahe che
    printf("Y(Post decrement) = %d \n",y);
    --y;            // y(4) = y(4)-1 = y(3)  ++y no use y++ ni jem thay che
                    // Pre increment          variable ni "aage" "--"" hoy to tene "PRE INCREMENT" kahe che
    printf("Y(Pre decrement) = %d\n\n\n",y); // y++ thi y ni value "5" mathi "4" thai che and --y no use y-- ni jem thay che y-- ni help thi aapde value "4" che atle --y thi y ni value "3" thi





    printf("Note :-  \"a++\" POST INCREMENT priority all operator karta oochi hoy che \"assignment operator\" kar ta pan\n");
	int a=4,b;
	printf("Ex :--  A = 4 and Y = null\n");
	b=a++;          /* THIS b=a++ POST INCREMENT and ASSINGMENT OPRATOR bane che to 
					   \"a++\" POST INCREMENT priority all operator karta oochi hoy che \"assignment operator\" kar ta pan
				===> to ASSIGNMENT OPERATOR ne karane A ni value increment thaya vagar jem che tem ne tem "B=4" thase and a ni value increment thai ne "A=5" thase  
	 				*/
	
	printf("\tA = %d and B = %d",a,b);
    return 0;
}
 
