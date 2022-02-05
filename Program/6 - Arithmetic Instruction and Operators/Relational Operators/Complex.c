#include<stdio.h>
int main()
{
    int a;

    a=5>4>3;
/*
1. GREATER THAN ni priority ASSIGMENT karta vadhare hoy che tethi FIRST GREATER THAN work kar se and expession ma all GREATER THAN che to computer left to Right work kar se.
2. 5>4 = TRUE  = 1
3. 1>3 = FALSE = 0 are print
*/
    printf("%d",a);
    return 0;
}