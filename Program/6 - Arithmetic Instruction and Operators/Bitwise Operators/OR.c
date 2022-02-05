#include<stdio.h>
int main()
{
    int a;

    a = 23|56;
    printf("OUTPUT : %d",a);
    return 0;
/*
23 = 0 1 0 1 1 1
56 = 1 1 1 0 0 0
    _____________
     1 1 1 1 1 1 = 63
*/

}
