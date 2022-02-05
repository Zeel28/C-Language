#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*
        SWICH CASE : swich statement in c tests the value of a variable and compares it with multiple cases. once the case match is found , a block of statement associated with that particular case is executed
                     
    */
    /*Syntax : 
                switch(expresion)
                {
                    case CONSTANT:
                        statements 1( CODE );
                        break;
                    case CONSTANT:
                        statements 2( CODE );
                        break;
                    case CONSTANT:
                        statements 3( CODE );
                        break;
                    case CONSTANT:
                        statements 4( CODE );
                        break;
                    default:
                        statements 5;
                }
    ==> swich case ma syntax parmane SWITCH ni aabar EXPRESION lakhva ma aave che, a ne expression nu OUTPUT 0 or 1 nathi aav tu but EXPRESSION NE JE RESULT AAVE TE J AAVE CHE EX . CONSTANT aave che and 
    ==> EXPRESION nu RESULT CONSATANT aave che, to niche lakhal CASE ma chek kar se ke CASE pachi lakhal CONSATANT SAME che ke nahi je CASE nu CONSTANT same hase te no CODE ke STATEMENT execute thase .

NOTE :
        ==> BREAK :- CASE na last ma BREAK lakhva ma aave che becomes BREAK lakhva ma na aave to je CASE no CONSATANT same aave teno CODE execute thase and sathe te pachi na all CODE or STATEMENT execute thase. CASE no CONSTANT same che ke nahi te chek kari ya vagar. 
        ==> DEFAIT :- swich case na last ma DEFAIT KEYWORD lakhava ma aave che becomes to EXPRESION nu RESULT CASE na koi CONSATANT sathe SAME no thayu to DEFULT ma lakhel STATEMENT execute thase.  
    
RULES for SWITCH statement :- 
        - The switch EXPRESION must be of an INTEGER or CHARATER type.
        - The case CONSATANT must be an INTGER or CHARACTER constant. 

        int x,y,z;
        char a,b;
        float f;

        Valid Switch	Invalid Switch	  Valid Case	   Invalid Case
          switch(x)	       switch(f)	    case 3;	         case 2.5;
         switch(x>y)	 switch(x+2.5)	   case 'a';	     case x;
        switch(a+b-2)		               case 1+2;	     case x+2;
      switch(func(x,y))		             case 'x'>'y';      case 1,2,3;

        - the CASE no CONSATANT are different hovo joi ye 
    */
    int a;
while (1) // while(1) menes 
{
    printf("***** Swich case *****\n");
    
    printf("1. Zeel \n");
    printf("2. Fenil \n");
    printf("3. Adhi \n");
    printf("4. Vishal \n");
    printf("5. Exit \n");

    printf("Enter a Number : ");
    scanf("%d",&a);
    switch(5+5)    
    {
        case 1:
            printf("Zeel vs krishna\n");
            break;
        case 2:
            printf("Fenil vs Mital\n");
            break;
        case 3:
            printf("Adhi vs Dhara\n");
            break;
        case 4:
            printf("Vishal vs Dhara\n");
            break;
        case 5:
        	exit(0);
        default :
            printf(" invlid character \n");
            break;
    }
}
    return 0;

}
