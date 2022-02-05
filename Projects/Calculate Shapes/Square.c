#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    float a,b;

    gotoxy(50,2);
    printf("Square Calculator\n");

    gotoxy(5,6);
    printf("Enter a One side length :-");
    scanf("%g",&a);

    gotoxy(5,8);
	printf("Answer :- ");
    printf("Diameter = %g cm",a*4);

    gotoxy(5,9);
    printf("Area :- %g cm^2",a*a);

    gotoxy(5,10);
    printf("Volume :- %g cm^3",a*a*a);
    return 0;
}
