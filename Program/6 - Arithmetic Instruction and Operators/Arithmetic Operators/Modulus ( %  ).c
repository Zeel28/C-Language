#include<stdio.h>
int main()
{
	printf("\t Modulus ( % )\n");
	printf("Ex : 1 \n");
	
	int a = 23,b = 5, c;
	c=a%b;	
	printf("A = 23  \n");
	printf("B = 5  \n");
	printf("C = A%B\n\n");
	printf("C = %d \n\n-----------------\n",c); 	/* c = 3        4  
														       	   ____
	Ex : 25 % 5 , 	12 % 8 , 13 % 4 etc 						5 |  23
														      	  |- 20
														      	  | ___
	                                                                 3   = print ( Remainder )        	*/
/*  Note : Modulus Operators na use thi two opernds no remainder (shesh) male che
		 : Modulus operators division kar ti vakte quotient ma . na aave taya shudhi 
		   division kare che and . aave taya shudhi ni che ni REMAINDER print kare che.
		   
		 : This ma 23/5 ne 5 tay shi dvision kare che 4. naaave tay shudhi and 3 print kare che .   
	*/
	return 0;
}
