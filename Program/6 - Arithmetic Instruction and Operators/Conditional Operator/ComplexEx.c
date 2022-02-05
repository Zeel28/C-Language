#include<stdio.h>
int main()
{
    
    printf("Ex : 1\n\n");
    int x;
    x= 4>3? 1,2,3:4,5,6;
    printf("ANS : %d\n",x);
    
    printf("Ex : 2\n\n");
    int a=3,b=5,c;
//    c = a>b?x=a:x=b; ==> Error 
/*    priority : priority mujab assigment operater ni priority conditional operater kar ta aaochi hoy che te thi conditional operator frist execute thase.
        i. conditional operator(a>b?x=a:x) atlu j execute thase and tema a>b ma b moto che to expr 2 execute thai se, x ma koi value nathi to PRINT nahi thai an ERROR show kar se.
*/
    c = a>b ? x=a:(x=b);
/*    PRIORITY : () ni vadhre che to 
*/    
    printf("ANS : %d\n",c);
    return 0;
}