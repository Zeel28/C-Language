#include<stdio.h>
#include<stdlib.h>
int main()
{
    int use;
    printf("\n\n\n\t\t==========================================\n");
	printf("\t\t::                                      ::\n");
	printf("\t\t::  1. Number Printer (0 to n)        \t::\n");
	printf("\t\t::                                      ::\n");
    printf("\t\t::  2. Number Printer (n to 0)        \t::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  3. Sentence Printer               \t::\n");
    printf("\t\t::                                      ::\n");
    printf("\t\t::  4. Exit                  \t\t::\n");
    printf("\t\t::                                      ::\n");
	printf("\t\t==========================================\n\n\n\n\n");
	while (1)
    {	
    printf("Which printer do you want to use ?     := ");
    scanf("%d",&use);
	

        switch (use)
        {
            case 1/* Number Printer (1 to n)*/:
            {
                   printf("***** Number Printer  (0 to n) *****\n");

                    int j,i;
	
	                printf("Enter number ( n ):- ");
	                scanf("%d",&i);
	
                    for(j=0;j<=i;j++)
                    {
                        printf("\t %d \n",j);
                    }
                break;
            }
            case 2/* Number Printer ( n to 1)*/:
            {
                   printf("***** Number Printer  (n to 0) *****\n");

                    int j,i;
	
	                printf("Enter number :- ");
	                scanf("%d",&i);
	
                    for(j=0;i>=j;i--)
                    {
                        printf("\t %d \n",i);
                    }
                break;
            }
            case 3/* Sentence Printer */:
            {
                   printf("***** Sentence Printer *****\n");

                    int i,j=0;
                    char a[100];

                    printf("Enter a Sentence :- ");
                    scanf("%s",&a);
	                printf("Enter number :- ");
	                scanf("%d",&i);
	
                    for(j=0;j<=i;j++)
                    {
                        printf("\t %s \n",a);
                    }
                break;
            }
            case 4:
            {
                exit(0);
            }
        
        default:
            printf(" please enter a 1 or 2 number .....!");
        }
    }
    
    
    return 0;
}
