#include<stdio.h>
int main()
{
    printf("***** ! (LOGICAL NOT OPERAT0R ) *****\n\n");
 

    /* !T => F = 0
       !F => T = 1
    */
   // je number 0 nathi te TRUE che.
   //number 0 che to FALUE che 
    int a;

    a=!0>0;
    // !0>0 ma ! (LOGICAL NOT OPERAT0R ) pachi 0 che atle te ne 0 => 1 kar se atle 1>0 experssion thase te aa RELATION TURE che to 1 PRINT thse.
    printf("!0>0 ANS : %d\n",a);

    a=!10>5;
    // !10>5 ma !(LOGICAL NOT OPERAT0R ) pachi value 1 ke 1 karta vadhre che to LOGICAL NOT OPERAT0R te ne 0 kar se   0>5 experssion ma 0 ae 5 karta mota nathi to aa RELATION FALSE che to 0 PRINT thse.
    printf("!10>5 ANS : %d\n",a);
    
    return 0;
}