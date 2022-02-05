#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
	gotoxy(60,3);
    printf("--------------------------------\n");
    gotoxy(60,4);
	printf("***** MULTIPLICATION TABLE *****\n");
    gotoxy(60,5);
	printf("--------------------------------\n");

    int num,z,i,j,m;
    printf("Enter Number of Table :- ");
    scanf("%d",&num);
	  
    int n;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    
for(z=10;z<=10;z++)
{
	gotoxy(80,z);
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n)  
            {  
            printf("%c",254);  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
}

    for(m=1;m<=10;m++)
    {
        printf("%d * %d = %d \n",num,m,num*m);
    }
    
    return 0;
}
