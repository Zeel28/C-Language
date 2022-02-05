#include<stdio.h>
int main()
{
	// SCANF FORMAT 
	
	/* Format :-("format specifier",adderess variable);
	 			("%d and etc "     , &          a  );     */

	           
    printf("\4\4\4\4\4\4\4  Entered by User \4\4\4\4\4\4\4\n\n");

 	
 	printf("*** Enter an Single Character ***\n\n");
	char c;
	printf("Enter a any one Character :- ");
	scanf("%c",&c);
 	printf("Your Entered Character :- %c\n\n",c);
 	
 	
	printf("*** Enter a Integer Number ***\n\n");
	int a;
	printf("Enter a any number :- ");
	scanf("%d",&a);
	printf("==> Your Entered Number :- %d\n\n",a);
	
	
	printf("*** Enter a Floating Number ***\n\n");
	float b;
	printf("Enter a any Number :- ");
	scanf("%g",&b);
	printf("Your Entered Float Number :-%g\n\n",b);
	

    return 0;
}
