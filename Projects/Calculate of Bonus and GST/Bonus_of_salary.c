#include<stdio.h>
int main()
{
    int salary,percentage,bonus,total;
    char name[10];
    
    printf("\t____________________________________________ \n");
    printf("\t    Program to calculate bonus of salary \n");
    printf("\t____________________________________________\n\n");
    
    printf("Employee Name : ");
    scanf("%s",&name);
    
    printf("Salary : ");
    scanf("%d",&salary);
    printf("Bonus Percentage (%): ");
    scanf("%d",&percentage);


	
	
	
	printf("\n\n\n\t\t==========================================\n");
	printf("\t\t::                                      ::\n");
	printf("\t\t::  Employee Name :- %s \t\t::\n",name);
	
    printf("\t\t::                                      ::\n");
	bonus=(salary*percentage)/100;
    printf("\t\t::  Bonus amount : %d \t\t::\n",bonus);
    
    printf("\t\t::                                      ::\n");
    total=salary+bonus;
    printf("\t\t::  Total Amount : %d \t\t::\n",total);
    printf("\t\t::                                      ::\n");
	printf("\t\t==========================================");
    
    return 0;
}
