#include<stdio.h>
int main()
{
    /* A!=B ma A and B vache != ( Not Equal to operator) che A ni value B jetali nahti, jo ha to TRUE thase to 1 print thse or 
                                                             A ni value B che , jo ha to FALSE thase to 0 print thse or*/
    int a;
    a=5!=5;
    // 5!=5 ma 5 ae 5 jetla che to aa RELATION FALSE che to 0 PRINT thse.
    printf("5!=5 ANS : %d\n",a);

    a=5!=10;
    // 5!=5 ma 5 ae 10 jetla nathi to aa RELATION TRUE che to 1 PRINT thse.
    printf("5!=10 ANS : %d",a);
    return 0;
}