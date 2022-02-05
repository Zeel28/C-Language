#include<stdio.h>
int main()
{
 char a[]="ZEEL";
 char b[]="BHANDERI";
 char c[]="ZEELBHAND|ERI";
 
    printf("123456789|      <= 9 curse ( 1 byte) shudhi align thase \n"); 
 	printf("         |      <= | shudhi align thse\n");
    printf("-----%s|     <= niche \"-\" ni jagiyaae black space printf thase \n",a);
    printf("%9s      <=  \n\n\n",a);
    
    printf("-%s|     <= Work   niche \"-\" ni jagiyaae black space printf thase \n",b);
    printf("%9s|     <= output  \n\n",b);
    
	printf("%9s\n\n\n\n\n\n",c);
	
	printf("--------1        <= Work \n");
    printf("-------10\n",10);
    printf("------100\n",100);
    printf("-----1000\n\n",1000);
	printf("%9d        <= Output \n",1);
    printf("%9d\n",10);
    printf("%9d\n",100);
    printf("%9d\n",1000);
    
return 0;
}
