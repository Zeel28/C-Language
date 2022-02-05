
#include <stdio.h>
int main()
{
  printf("***** Good example of the conditional operator is,\n\n");
  int item;
  printf("Enter the number of items: ");
  scanf("%d", &item);
  printf("You have %d item%s.", item, (item == 1) ? "" : "s");

  printf("Ex : 2\n\n");
  float a, b, c, max;
  printf("Enter three numbers: ");
  scanf("%f %f %f", &a, &b, &c);
  max = (a > b && a > b) ? a 
                         : (b > a && b > c) 
                         ? b
                         : c;
  printf("Maximum number = %.2f", max);

  /*if(expression1)
    {
      value = 1;
    }
    else if(expression2)
    {
      value = 2;
    }
    else if(expression3)
    {
      value = 3;
    }
    else
    {
      value = 0;
    }
  */
  //  value = (exp1)?1:(exp2)?2:(exp3)?3:0;
  return 0;
}
