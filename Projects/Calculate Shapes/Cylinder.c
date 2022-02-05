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
            Cylinder calculation formula

            Circumference = 2*pi*r
            Surface area = 2*pi*r*h + 2*pi*r*r
            Area = pi*r*r*h
*/
int main()
{
    float r,h;

    gotoxy(50,2);
    printf("Cylinder Calculator\n");

    gotoxy(5,5);
    printf("Enter a Radius : ");
    scanf("%g",&r);
    gotoxy(5,6);
    printf("Enter a Hight : ");
    scanf("%g",&h);


	// gotoxy(5,9);
	// printf("Answer :- ");
    // printf("Circumference = %g\n",2*3.14*r);
    // gotoxy(40,9);
	// printf("Solution :-    ");
	// printf("Circumference = 2*pi*Radius = 2*pi*%g = %g",r,2*3.14*r);

    gotoxy(5,11);
    printf("Surface area = %g\n",2*3.14*r*h+2*3.14*r*r);
    gotoxy(40,11);
	printf("Solution :- ");
	printf("\tSurface area = 2*pi*Radius*Hight+2*pi*Radius*Radius   = 2*3.14*%g*%g+2*pi*%g*%g   = %g",r,h,r,r,2*3.14*r*h+2*3.14*r*r);

 	gotoxy(5,13);
    printf("Area = %f\n",3.14*r*r*h);
    gotoxy(40,13);
	printf("Solution :- ");
	printf("\tArea = pi*r*r*h = pi*%g*h =pi*%g = %g",r*r,r*r*h,3.14*r*r*h);



    return 0;
}
