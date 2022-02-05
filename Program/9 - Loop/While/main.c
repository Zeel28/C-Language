#include<stdio.h>
int main()
{
    /* Note : while loop ma condition true ke false ma aa ve che, 
                        jo condition TRUE thai to {} nu statement or code execute thai che  
                        jo CONDITION FALSE thai to loop nu STATEMENT OR CODE  INFINITE thai jay che
    */
    /*
    Syntax : while( condition)
             {


                    
             }
    
    */
    
    printf("***** while loop  *****\n");
    
    int i=1;                  /* Initialization */

    while (i<=5)            /* Condition*/
    {
        printf("zeel \n");  /* Statement or code*/

        i++;               /* Flow */
    }
    
    /*
    STEP 1. i=1             i ni value 1 che.
    STEP 2. WHILE(i<=5)     i ni value 1 che atle condition true thase te thi zeel 1 var print thase.
    STEP 3. i++;            i++ thi i ni value increase thase and 1 mathi 2 tase and 
    STEP 4. WHILE(i<=5)     i ni value 2 che  atle condition true thase te thi zeel 2 var print thase.
            aavi ri te 4 var print thse and 5 mi var 5=5 thse and last var print thse i ni value increase thai ne 5 mathi 6 thse and 6<=5 falue thse to loop mathi bahar nikali jase 
            \n thi cursor newline ma aav se
    Total : 5 time print are zeel
    */
    return 0;
}