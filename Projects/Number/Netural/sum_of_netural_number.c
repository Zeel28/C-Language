#include<stdio.h>
int main()
{
    
    printf("***** Sum of Netural Number *****\n\n");

    int n,i,sum=0;

    printf("Enter a Number :- ");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        printf("\t %d \n",i);
		/* code */
    }
    for(i=0;i<=n;i++)
    {
    	sum=sum+i;
	}
	printf("   _____________\n");
    printf("Total number :- %d",sum);

    return 0;
}
