#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/*
            Right angle triangle calculation formula
        Area= base*hight/2         |\
                                   |  \
                                   |    \
                                   |      \
                                 Hight      \
                                   |          \
                                   |            \
                                   |_____ base ___\

*/
int main()
{
    float a,b,A;

    gotoxy(50,2);
    printf("Right angle Triangle Calculator\n");

    gotoxy(5,6);
    printf("Enter Base length :- ");
    scanf("%g",&a);
    gotoxy(5,7);
    printf("Enter Hight Length :- ");
    scanf("%g",&b);

    A=a*b/2;
    gotoxy(5,9);
    printf("Area :- %g ",A);
	gotoxy(40,9);
	printf("Solution :- ");
	printf("Area = Base*Hight/2 = %g x %g / 2 = %g / 2 = %g ",a,b,a*b,A);

    return 0;
}
