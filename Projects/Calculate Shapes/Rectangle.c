#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}/*                                              ______________________________
                                                |                              |
            Rectangle  calculation formula      |                              |
            Perimeter = 2(L + W)                |                              |
            Area = W * L                      Width                            |
                                                |                              |
                                                |                              |
                                                |_____________Length___________|
*/
int main()
{
	float l,w,P;

    gotoxy(50,2);
    printf("Rectangle Calculator\n");

    gotoxy(5,6);
	printf("Enter a L length :- ");
	scanf("%g",&l);
	gotoxy(5,7);
	printf("Enter a W width :- ");
	scanf("%g",&w);

	gotoxy(5,10);
	P=2*(l+w);
	printf("Perimeter :- %g \n",P);
	gotoxy(40,10);
	printf("Solution :- ");
	printf("P = 2*(W+L) = 2*(%g+%g) = %g ",w,l,P);

	gotoxy(5,12);
	printf("Area :- %g",l*w);
	gotoxy(40,12);
	printf("Solution :- ");
	printf("A = W x L = %g x %g = %g ",l,w,l*w);
	return 0;
}
