#include<stdio.h>
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
    int num;
//========================= Header part ================================    
    gotoxy(48,2);
	printf("Caribbean - Power of Ocean");
    gotoxy(52,5);
    printf("Shapes Calculator \n");
    
//============================= Menu ===================================
    gotoxy(11,8);
    printf("1. Circle");
    gotoxy(53,8);
    printf("2. Cylinder");
    gotoxy(93,8);
    printf("3. Rectangle\n");
    gotoxy(11,9);
    printf("4. Right angled triangle");
    gotoxy(53,9);
    printf("5. Square");
    gotoxy(93,9);
	printf("6. ");
    gotoxy(11,10);
	printf("7. ");
	gotoxy(53,10);
	printf("8. ");
	gotoxy(93,10);
    printf("9. Exit to Ocean\n\n\n");
    
//========================== Select shapes =============================
    while (1)
    {
    	gotoxy(11,13);	
        printf("Enter Shape Number ( 1-9 ):-    \b\b\b");
        scanf("%d",& num);
		
        switch (num)
        {
            case 1 :
            {                                //======== Circle===========
                float r;

                gotoxy(35,14);
				printf("====================================================");
				gotoxy(35,15);
				printf("||                                                ||");
				gotoxy(35,16);
				printf("||            Welcome Circle Calculator           ||");
				gotoxy(35,17);
				printf("||                                                ||");
				gotoxy(35,18);
				printf("====================================================");
				
                gotoxy(35,20);
				printf("====================================================");
				gotoxy(35,21);
				printf("||                                                ||");
				gotoxy(35,22);
                printf("||  Enter a Radius :           cm                 ||");
				gotoxy(35,23);
				printf("||                                                ||");
				gotoxy(35,24);
				printf("====================================================");
			    gotoxy(60,22);
                scanf("%g",&r);

                gotoxy(35,28);
				printf("====================================================");
				gotoxy(35,29);
				printf("||                                                ||");
				gotoxy(35,30);
	            printf("||           ------** Answer **------             ||");
	            gotoxy(35,31);
				printf("||                                                ||");
				gotoxy(35,32);
                printf("||  Circumference = %10g cm%c               ||",2*3.14*r,253);
                gotoxy(35,33);
				printf("||                                                ||");
                gotoxy(35,34);
	            printf("||  Diameter :- %13g  cm%c                ||",r*2,253);
	            gotoxy(35,35);
				printf("||                                                ||");
	            gotoxy(35,36);
	            printf("||  Area = %18g  cm%c                ||",3.14*r*r,253);
				gotoxy(35,37);
				printf("||                                                ||");
				gotoxy(35,38);
				printf("====================================================\a");					
                break;
            }
            case 2:
            {
                float r,h;

                gotoxy(35,14);
				printf("====================================================");
				gotoxy(35,15);
				printf("||                                                ||");
				gotoxy(35,16);
				printf("||            Welcome Cylinder Calculator         ||");
				gotoxy(35,17);
				printf("||                                                ||");
				gotoxy(35,18);
				printf("====================================================");               
                
//===================== user enter value of cylinder =====================				
				gotoxy(35,20);
				printf("====================================================");
				gotoxy(35,21);
				printf("||                                                ||");
				gotoxy(35,22);
                printf("||  Enter a Radius :                m             ||");
				gotoxy(35,23);
				printf("||                                                ||");
				gotoxy(35,24);
                printf("||  Enter a Hight :                 m             ||");
				gotoxy(35,25);
				printf("||                                                ||");
				gotoxy(35,26);
				printf("====================================================");
			    gotoxy(60,22);
                scanf("%f",&r);
                gotoxy(60,24);
                scanf("%f",&h);
                
                gotoxy(35,28);
				printf("====================================================");
				gotoxy(35,29);
				printf("||                                                ||");
				gotoxy(35,30);
	            printf("||           ------** Answer **------             ||");
	            gotoxy(35,31);
				printf("||                                                ||");
	            gotoxy(35,32);
                printf("||  Surface area = %11g    m%c              ||",2*3.14*r*h+2*3.14*r*r,253);
	            gotoxy(35,33);
				printf("||                                                ||");
				gotoxy(35,34);
	            printf("||  Lateral surface = %8g    m%c              ||",2*3.14*r*h,253);
				gotoxy(35,35);
				printf("||                                                ||");
				gotoxy(35,36);
	            printf("|| Area = %20g    m%c              ||",3.14*r*r*h,253);
				gotoxy(35,37);
				printf("||                                                ||");
				gotoxy(35,38);
				printf("====================================================\a");	
				break;
            }
            case 3:
            {
                float l,w;

                gotoxy(35,14);
				printf("====================================================");
				gotoxy(35,15);
				printf("||                                                ||");
				gotoxy(35,16);
				printf("||            Welcome Rectangle Calculator         ||");
				gotoxy(35,17);
				printf("||                                                ||");
				gotoxy(35,18);
				printf("===================================================="); 
				
//===================== user enter value of Rectangle =====================				
				gotoxy(35,20);
				printf("====================================================");
				gotoxy(35,21);
				printf("||                                                ||");
				gotoxy(35,22);
                printf("||  Enter a Length :                m             ||");
				gotoxy(35,23);
				printf("||                                                ||");
				gotoxy(35,24);
                printf("||  Enter a Width :                 m             ||");
				gotoxy(35,25);
				printf("||                                                ||");
				gotoxy(35,26);
				printf("====================================================");
			    gotoxy(60,22);
                scanf("%f",&l);
                gotoxy(60,24);
                scanf("%f",&w);
                
                gotoxy(35,28);
				printf("====================================================");
				gotoxy(35,29);
				printf("||                                                ||");
				gotoxy(35,30);
	            printf("||           ------** Answer **------             ||");
	            gotoxy(35,31);
				printf("||                                                ||");
	            gotoxy(35,32);
                printf("||  Perimeter = %11g    m%c                 ||",2*(l+w),253);
	            gotoxy(35,33);
				printf("||                                                ||");
				gotoxy(35,34);
	            printf("||  Area = %16g    m%c                 ||",l*w,253);
				gotoxy(35,35);
				printf("||                                                ||");
				gotoxy(35,36);
				printf("====================================================\a");
                break;
            }
            case 4:
            {
                float b,h;

                gotoxy(35,14);
				printf("====================================================");
				gotoxy(35,15);
				printf("||                                                ||");
				gotoxy(35,16);
				printf("||            Welcome Right angled Rectangle      ||");
				gotoxy(35,17);
				printf("||                  Calculator                    ||");
				gotoxy(35,18);
				printf("====================================================");	
				
//===================== user enter value of right angled recatangle =====================				
				gotoxy(35,20);
				printf("====================================================");
				gotoxy(35,21);
				printf("||                                                ||");
				gotoxy(35,22);
                printf("||  Enter a Base length :                m        ||");
				gotoxy(35,23);
				printf("||                                                ||");
				gotoxy(35,24);
                printf("||  Enter a Hight length:                m        ||");
				gotoxy(35,25);
				printf("||                                                ||");
				gotoxy(35,26);
				printf("====================================================");
			    gotoxy(60,22);
                scanf("%f",&b);
                gotoxy(60,24);
                scanf("%f",&h);
                
                gotoxy(35,28);
				printf("====================================================");
				gotoxy(35,29);
				printf("||                                                ||");
				gotoxy(35,30);
	            printf("||           ------** Answer **------             ||");
	            gotoxy(35,31);
				printf("||                                                ||");
	            gotoxy(35,32);
                printf("||   Area = %20g    m%c             ||",h*b/2,253);
	            gotoxy(35,33);
				printf("||                                                ||");
				gotoxy(35,34);
				printf("====================================================\a");
				break;	
			}
            case 5:
            {                                // Square
                float l;

                gotoxy(35,14);
				printf("====================================================\n");
				gotoxy(35,15);
				printf("||                                                ||\n");
				gotoxy(35,16);
				printf("||            Welcome Square Calculator           ||\n");
				gotoxy(35,17);
				printf("||                                                ||\n");
				gotoxy(35,18);
				printf("====================================================\n\n\n");
				
                gotoxy(35,20);
				printf("====================================================\n");
				gotoxy(35,21);
				printf("||                                                ||\n");
				gotoxy(35,22);
                printf("||  Enter a one side length :                     ||\n");
				gotoxy(35,23);
				printf("||                                                ||\n");
				gotoxy(35,24);
				printf("====================================================\n\n\n");
			    gotoxy(68,22);
                scanf("%g",&l);

				gotoxy(35,28);
				printf("====================================================");
				gotoxy(35,29);
				printf("||                                                ||");
				gotoxy(35,30);
	            printf("||           ------** Answer **------             ||");
	            gotoxy(35,31);
				printf("||                                                ||");
	            gotoxy(35,32);
                printf("||  Diameter = %11g    m%c                  ||",l*4,253);
	            gotoxy(35,33);
				printf("||                                                ||");
				gotoxy(35,34);
	            printf("||  Area = %16g    m%c                 ||",l*l,253);
				gotoxy(35,35);
				printf("||                                                ||");
				gotoxy(35,36);
	            printf("|| Volume = %15g    m%c                 ||",l*l*l,253);
				gotoxy(35,37);
				printf("||                                                ||");
				gotoxy(35,38);
				printf("====================================================\a");					
                break;
            }
            case 6:
            {
            	printf("Comeinng soon ...!");
            	break;		
			}
			case 7:
			{
				printf("Comeing soon....!");
				break;
			}
			case 8:
			{
				printf("comeing soon ....!");
				break;
			}
            case 9:
            {
                exit(0);
            }
            default:
                	printf("\a\n\nPlease enter a number between 1 - 5 okk.......! \2");
        }
    }


    return 0;
}
