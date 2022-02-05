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

                    int j=0,i;
	
	                printf("Enter number ( n ):- ");
	                scanf("%d",&i);
	
                    do
                    {
                        printf("\t %d \n",j);/* 0 to n print */
                        j++;
                    } while (j<=i);
                    
                break;
            }
            case 2/* Number Printer ( n to 1)*/:
            {
                   printf("***** Number Printer  (n to 0) *****\n");

                    int j=0,i;
	
	                printf("Enter number :- ");
	                scanf("%d",&i);
	
                    do
                    {
                        printf("\t %d \n",i);/* code */
                        i--;
                    } while (i>=j);
                    
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
                    do
                    {
                        printf("\t %s \n",a);/* code */
                        i--;
                    } while (i>=j);
                    
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
