#include<stdio.h>
int main()
{
    /* Note : loop condition at the top of the loop, the do...while loop in C programming checks its condition at the bottom of the loop.
    */
    /*
    Syntax : do
             {


                    
             }while( condition)
    
    */
    
    printf("***** do while loop  *****\n");
    
    int i=1;                  /* Initialization */

    do            
    {
        printf("zeel \n");  /* Statement or code*/

        i++;               /* Flow */
    }while(i<=5);          /* Condition*/
    
    
    /*

            \n thi cursor newline ma aav se
    --> Total computer 5 time condition chek tah tase. kem ke 5 vaar zeel print thai ne I++ thi i ni value 6 thse and i<=5 ma falue thase and te loop ni bahar nikali jase  
    --> 5 time print
    */
    return 0;
}