#include<stdio.h>
int main()
{
    float price,percentage,gst,total;
    char name[10];
    
    printf("\t____________________________________________ \n");
    printf("\t    Program to calculate GST of salary \n");
    printf("\t____________________________________________\n\n");
    
    printf("Item Name : ");
    scanf("%s",&name);
    
    printf("Price : ");
    scanf("%f",&price);
    printf("GST Percentage (%%): ");
    scanf("%f",&percentage);


	
	
	
	printf("\n\n\n\t\t==========================================\n");
	printf("\t\t::                                      ::\n");
	printf("\t\t::  Item Name :- %8s \t\t::\n",name);
	
    printf("\t\t::                                      ::\n");
	gst=(price*percentage)/100;
    printf("\t\t::  GST amount : %g \t\t\t::\n",gst);
    
    printf("\t\t::                                   \t::\n");
    total=price+gst;
    printf("\t\t::  Total Amount : %g \t\t::\n",total);
    printf("\t\t::                                      ::\n");
	printf("\t\t==========================================");
    
    return 0;
}
