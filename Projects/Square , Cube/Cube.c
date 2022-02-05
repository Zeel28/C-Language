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
    gotoxy(37,5);
    printf("*** Calculate the Cube of a number Program***\n");

    float a;
    printf("Enter a Number :- ");
    scanf("%g",&a);
    printf("Cube of a given number %g is %g",a,a*a*a);
    return 0;
}
