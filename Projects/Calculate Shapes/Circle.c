#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/*
            Circle calculation formula

            Circumference = 2*pi*r
            Diameter = 2*r
            Area = pi*r*r
*/
int main()
{
    float r,b;

    gotoxy(50,2);
    printf("Circle Calculator\n");

    gotoxy(5,5);
    printf("Enter a Radius : ");
    scanf("%g",&r);


	gotoxy(5,9);
	printf("Answer :- ");
    printf("Circumference = %g\n",2*3.14*r);
    gotoxy(40,9);
	printf("Solution :-    ");
	printf("Circumference = 2*pi*Radius = 2*pi*%g = %g",r,2*3.14*r);

    gotoxy(5,11);
    printf("Diameter = %g\n",r*2);
    gotoxy(40,11);
	printf("Solution :- ");
	printf("\tDiameter = 2*Radius = 2*%g = %g",r,r*2);

 	gotoxy(5,13);
    printf("Area = %g\n",3.14*r*r);
    gotoxy(40,13);
	printf("Solution :- ");
	printf("\tArea = pi*r*r = pi*%g = %g",r*r,3.14*r*r);



    return 0;
}
