#include<stdio.h>
int main()
{
    /*
    Syntax : for(start; stop; steps)
             {

                   Statement or code 

             }
    
    */
    
    printf("***** for loop  *****\n");
    
    int i;                  

    for(i=1;i<=5;i++) /* START = Initialization */ /* STOP = Condition*/ /* STEP = Flow */
    {
        printf("zeel \n");  /* Statement or code*/
    }
    
    /*
    i).  The init step is executed first, and only once.
    ii).  Next, the condition is evaluated. If it is true, the body of the loop is executed. If it is false, the body of the loop does not execute and the flow of control jumps to the next statement just after the 'for' loop.
    iii). This statement allows you to update any loop control variables. 

    --> Total computer 6 time check a condition.
    --> 5 time print a zeel
    */
    return 0;
}
