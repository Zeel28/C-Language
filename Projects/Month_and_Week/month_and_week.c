#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int num,month,week;
    
   	printf("\n\n\n\t\t==========================================\n");
	printf("\t\t::                                      ::\n");
	printf("\t\t::  1. Month Name            \t\t::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  2. Week Name             \t\t::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  3. Exit                  \t\t::\n");
    printf("\t\t::                                      ::\n");
	printf("\t\t==========================================\n");
	
	while(1)
	{
	
		printf("Enter a Number :- ");
		scanf("%d",&num);

    	switch(num)
    	{
        	case 1:
        	{
            	//  ======================== Month ============================ 

            	printf("Enter a Month number ( 1-12 ) : ");
            	scanf("%d",&month);

            	switch (month)
            	{
                	case 1:
                    	printf(" January \n\n");
                    	break;
                	case 2:
                    	printf(" February \n\n");
                    	break;
                	case 3:
                    	printf(" March \n\n");
                    	break;
                	case 4:
                    	printf(" April \n\n");
                    	break;
                	case 5:
                    	printf(" May \n\n");
                    	break;
                	case 6:
                    	printf(" June \n\n");
                    	break;
                	case 7:
                    	printf(" July \n\n");
                    	break;
                	case 8:
                    	printf(" August \n\n");
                    	break;
                	case 9:
                    	printf(" September \n\n");
                    	break;
                	case 10:
                    	printf(" October \n\n");
                    	break;
                	case 11:
                    	printf(" November \n\n");
                    	break;
                	case 12:
                    	printf(" December \n\n");
                    	break;
                	default :
                    	printf("bs*ke Total 12 month aave...  \n\n");
            	}
            	break;
        	}
        	case 2:
        	{
            	//  ======================== Week ============================  

            	printf("Enter a Week number ( 1-7 ) :  ");
            	scanf("%d",&week);

            	switch (week)
            	{
                	case 1:
                    	printf("Sunday \n\n");
                    	break;
                	case 2:
                    	printf("Monday \n\n");
                    	break;
                	case 3:
                    	printf("Tuesday \n\n");
                    	break;
                	case 4:
                    	printf("Wednesday \n\n");
                    	break;
                	case 5:
                    	printf("Thursday \n\n");
                    	break;
                	case 6:
                    	printf("Friday \n\n");
                    	break;
                	case 7:
                    	printf("Saturday \n\n");
                    	break;
                	default :
                    	printf("bs*ke Total 7 days aave... weekma \2 \n\n");
            	 }
            	 break;
        	}
        
        	case 3:
        	{
        		exit(0);
			}
        	default:
            	printf("Enter a valid number\n\n");
    	}
    	
	}
    return 0;
}
