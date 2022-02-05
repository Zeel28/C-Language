#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i;
    
   	printf("\n\n\n\t\t==========================================\n");
	printf("\t\t::                                      ::\n");
	printf("\t\t::  1. Even Number printer               ::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  2. Odd Number Printer              ::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  3. Exit                  \t\t::\n");
    printf("\t\t::                                      ::\n");
	printf("\t\t==========================================\n\n\n");
    
	while(1)
    {
    	int use;
    	
    	printf("Which printer do you want to use ?     := ");
    	scanf("%d",&use);
		
		switch(use)
		{
			case 1:
			{
				int i,sum=0;
				printf("Enter Number :- ");
				scanf("%d",&num);
				
				for(i=0;i<=num;i++)
				{
					if(i%2==0)
					{
						printf("\t %d \n",i);
						sum=sum+i;
					}
					
				}
				printf("\n   _____________________________\n");
				printf("  Sum of First %d Number is :- %d \3\3\3\3 \n\n\n",num,sum);
				break;
				
			}
			case 2:
			{
				int i,sum;
				printf("Enter Number :- ");
				scanf("%d",&num);
				
				for(i=0;i<=num;i++)
				{
					if(i%2==0)
					{
						
					}
					else
					{
						printf("\t %d \n",i);
						sum=sum+i;
					}
				}
				printf("\n   _____________________________\n");
				printf("  Sum of First %d Number is :- %d \3\3\3\3 \n\n\n",num,sum);
				break;
			}
			default:
			{
				exit(0);
			}
		}
	}
	


    return 0;
}
