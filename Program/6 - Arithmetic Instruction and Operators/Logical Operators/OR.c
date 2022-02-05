#include<stdio.h>
int main()
{
    printf("***** || (LOGICAL OR OPERAT0R ) *****\n\n");   
/*
	 ___________________________________________
	|    Stat 1    |    Stat 2     |   Result   |
	|______________|_______________|____________|
	|   FALUE (0)  |   FALUE (0)   |  FALUE (0) |
	|   TRUE  (1)  |   FALUE (0)   |  TRUE  (1) |
	|   FALUE (0)  |   TRUE  (1)   |  TRUE  (1) |
	|   TRUE  (1)  |   TRUE  (1)   |  TRUE  (1) |
	|______________|_______________|____________|
	
  // ==> OR ma ek pan TRUE statement che to FA thase .
*/
  
    int a;

    a=5>10 || 5>10;
    //FALUE (0)  |   FALUE (0)   =>  FALUE (0) 
    printf("5>10 || 5>10 : %d\n",a);

    a=5>10 || 10>5;
    //FALUE (0)  |   TRUE (1)   =>   TRUE (1) 
	printf("5>10 || 10>5 : %d\n",a);
    
    a=10>5 || 5>10;
    //TRUE (1)  |   FALUE (0)   =>  TRUE (1) 
	printf("10>5 || 5>10 : %d\n",a);
    
    a=10>5 || 30>20;
    //TRUE (1)   |   TRUE  (1)  =>  TRUE (1)
	printf("10>5 || 30>20 : %d\n",a);
    
	return 0;
}
