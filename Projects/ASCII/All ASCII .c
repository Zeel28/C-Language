#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\t***** ASCII *****\n\n");
	//'c' character constant pan intger ni jem store thase becomes 'c' ae binary ma store thase nahi to tene store kar va mate ASCII code no use thase and te intger ma hoy che 
    // %d displays the integer value of a character
    // %c displays the actual character
	int a;
	char c;
	printf(" ***** SOME SYMBOLS ASCII VALUES *****\n\n");
		for(a=0;a<=47;a++)
		{
			printf("The ASCII value of  %c  =  %d \n",a,a);
    	}
    
    
   	printf("\n\n ***** NUMBER ASCII VALUES *****\n\n");
		for(a=48;a<=64;a++)
		{
			printf("The ASCII value of  %c  =  %d \n",a,a);
    	}
    
    
	printf("\n\n ***** CAPITAL A to Z ASCII VALUES *****\n\n");
		for(a=65;a<91;a++)
		{
			printf("The ASCII value of  %c  =  %d \n",a,a);	
		}
	
	    
	printf("\n\n ***** SOME SYMBOLS ASCII VALUES *****\n\n");
		for(a=91;a<=96;a++)
		{
			printf("The ASCII value of  %c  =  %d \n",a,a);
    	}	
    
	
	printf("\n\n ***** SMALL a to z ASCII VALUES *****\n\n");
		for(a=97;a<=254;a++)
		{
			printf("The ASCII value of  %c  =  %d \n",a,a);
		}
	fflush(stdin);
	scanf("%c",c);
	return 0;
}
