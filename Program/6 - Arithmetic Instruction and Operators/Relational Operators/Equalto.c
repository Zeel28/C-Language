#include <stdio.h>
int main()
{
    /* A==B ma A and B vache == ( Equal to operator) che A ni value B jetali che, jo ha to TRUE thase to 1 print thse or 
                                                         A ni value B nahti, jo ha to FAlSE thase to 0 print thse or */
    int a;

    a = 5 == 5;
    printf("5==5 ANS : %d\n", a);
    // 5==5 ma 5 ae 5 jetla che to aa RELATION TRUE che to 1 PRINT thse.
    a = 5 == 3;
    printf("5==3 ANS : %d\n", a);
    // 5==3 ma 5 ae 3 jetla nahti to aa RELATION FALSE che to 0 PRINT thse.
    a = 3 == 5;
    printf("3==5 ANS : %d\n", a);
    // 3==5 ma 3 ae 5 jetla nathi to aa RELATION FALSE che to 0 PRINT thse.
    return 0;
}