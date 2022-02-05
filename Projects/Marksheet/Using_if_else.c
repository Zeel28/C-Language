#include<stdio.h>
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
    int a,b,c,d,e,f,g,total,pf;
    float avg;
    gotoxy(20,5);
    printf("\4\4\4\4\4\4\4\4\4  Marks Details \4\4\4\4\4\4\4\4\4\n\n");
    printf("***** Subject *****\n\n");
    printf("Enter a Gujarati Marks :- ");
    scanf("%d",&a);
    printf("Enter a English Marks :- ");
    scanf("%d",&b);
    printf("Enter a Hindi Marks :- ");
    scanf("%d",&c);
    printf("Enter a Sanskrit Marks :- ");
    scanf("%d",&d);
    printf("Enter a MATHEMATICS :- ");
    scanf("%d",&e);
    printf("Enter a SCIENCE & TECH. Marks :- ");
    scanf("%d",&f);
    printf("Enter a SOCIAL SCIENCE Marks :- ");
    scanf("%d",&g);


    total=a+b+c+d+e+f+g;
    printf("\n\nTotal :- %10d \n",total);

    avg=total/7;
    printf("Average :- %.4f %\n",avg);

    printf("Pass / Fail : ");
    (avg>=35)?(printf("Pass\n")):(printf("Fail\n"));

	printf("Grade :- ");
	if(avg==100)
	{
		printf("Distinction");
	}
	else if(avg>=90)
	{
		printf("A1");
	}
	else if(avg>=80)
	{
		printf("A2");
	}
	else if(avg>=70)
	{
		printf("B1");
	}
	else if(avg>=60)
	{
		printf("B2");
	}
	else if(avg>=50)
	{
		printf("C1");
	}
	else if(avg>=40)
	{
		printf("C2");
	}
	else
	{
		printf("Fail");
	}
    return 0;
}
