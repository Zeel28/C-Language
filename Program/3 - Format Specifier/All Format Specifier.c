#include <stdio.h>
#include<stdlib.h>
int main() 
{
	




	// 					Format Specifier (FS) 				//

/*	Format Specifier	  Datatype			 	  Input \ Output                 Example

	%d and %i             int         			  Integer                        0 to 9 (All)
	%u                    int         			  Unsigned Int
	
	%f          		  float       			  Real           		         floating point interger-0.065,0.1,21.4 etc  (All)    
	%e and %E		      float         		  Real           	    	   	 Scientific notation of floats
	%g 					  float   			      Real                   	     %g ma %d and %f bane ni value store thai sake che  Input 0.5 => Output = 0.5  Not a print Input 0.5 => Output 0.5000000 meanes je value hoy tej printf thase biji garbage value printf nahi thai
	
 	%c                    char        			  Only Single character	         'a'to'z' , 'A'to"Z' , '0'to'9' and any symbol 
	%s                    char a[____]  		  Sentecres                      Zeel Bhanderi  (All)
	
	%lf					 double					 long Number					 Long range 45.67 => 45.6500000
	*/

											/******* 	Syntex 		*******/
											
printf("\n********  Integer  *******\n");
   int a=10,b=20;				   	   //   i=value ==> a=value(i)  	and 	 ii=value ==> a=value(ii)       */	
	printf("a=%d and b = %d \n",a,b);  		/*	printf("a =FS and b = FS",_,_);   ====>   printf("a = i and b = ii ",i,ii);    */     
	printf("a=%d and b = %d \n",b,a);  		/*   printf("a =FS and b = FS",_,_);   ====>   printf("a = ii and b = i ",ii,i);*/                                                                                                                                                 
	printf("Sum of a=%d and b=%d Total :-%d \n",a,b,a+b);
//  printf("   sum of a=FS and b=FS Total :-FS",_,_,_+_);   ====>   printf("sum of a=i and b=ii Total :-i+ii",i,ii,i+ii);



printf("\n********  Float  *******\n");
   float c = 0.5 , d= 0.7;
   	printf("a=%f and b = %f \n",c,d);  		/*	printf("a =FS and b = FS",_,_);   ====>   printf("a = i and b = ii ",i,ii);    */     
	printf("a=%e and b = %e \n",d,c);  		/*   printf("a =FS and b = FS",_,_);   ====>   printf("a = ii and b = i ",ii,i);*/
	printf("a=%g and b = %g \n",c,d);
	printf("Sum of a=%f and b=%f Total :-%f \n",c,d,c+d);
//  printf("  sum of a=FS and b=FS Total :-FS",_,_,_+_);   ====>   printf("sum of a=FS and b=FS Total :-i+ii");



printf("\n\n********  Character  *******\n");
   char e= 'B';
   fflush(stdin); 							  //   i=value       ==>  Latter = value(i)    
   printf("Latter :- %c \n", e);       		/*	printf("FS ",_);   ====>   printf("Latter = i ",i);    */ 



printf("\n\n********  String  *******\n");
	char f[]="Zeel Bhanderi"; 
	printf("%s \n",f); //Normal 
	
	

printf("\n\n********  Double *******\n");
	double g=28.89; 
	printf("%lf \n",g); //Normal 
	
	
		
/********  Align digit, Sentences and any symbols **********/
/*%digit lakhava ma jeti digit lakhshu te last letter(i thi Z) shudhi jase and bakini balck space chod se*/

printf("\n\n********  Align  *******\n");
	printf("\n%20s \n",f); 	// shift to the right 20 characters including the string
	printf("       %s \n",f);  // 8space balck and 12 letter(Zeel Bhanderi)
	
	printf("\n%-30s |<= startyreiuyouteyroty\n\n",f);   //left align -20 
	
	printf("%20.9s \n",f);   //%number._s pachi(9)je lakhel digit jetla Letter print(Zeel_Bhan Total 9lettter) thase and bakicni balck space (11 balck space) chud se  
	printf("       %s \n",f);
	
	printf("%-20.9s \n",f);   //%number._s pachi(9)je lakhel digit jetla Letter print(Zeel_Bhan Total 9lettter) thase and bakicni balck space (11 balck space) chud se  
	printf("       %s \n",f);

   return 0;
}
