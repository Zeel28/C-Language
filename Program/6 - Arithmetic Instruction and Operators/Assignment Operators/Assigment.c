#include<stdio.h>
int main()
{
    
    int x=5,a=5;
    x=x*3+4;
    printf("x=x*3+4 ANS : %d\n",x);
// 1. x*3 => 5*3   x = 15
// 2. x+4 => 15+4  x = 19
// 3. x=19 print
    
    a*=3+4;
    printf("a*=3+4 ANS : %d\n",a);
// assignment opeRATER NI PRORITY + kar ta oochi hoy che te thi + operator first work kar se.    
// 3+4 => 7
// x*7 => 5*7  x = 35
// x= 35 print 
    return 0;
}