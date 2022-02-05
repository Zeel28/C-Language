/* ***** sizeof() *****

    Need of Sizeof  :- variable ni size(bits) print kar che.
                    :- to find out number of elements in a array, sizeof can be used to calculate of elements of arrray automatically.   { int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
                                                                                                                                          printf("Number of elements:%lu ", sizeof(arr) / sizeof(arr[0]));
                                                                                                                                          return 0;   }               
   sizeof(datatype)
   sizeof(variable)
   sizeof(constant)

*/
#include<stdio.h>
int main()
{

	printf("This Program is 64 bits compiler base \n\n");
//  sizeof(datatype)
    int x;
    printf("sizeof(datatype)\n\n");
    x=sizeof(int);                    //x=sizeof(int) ma x= sizeof()ma je value aav se te x ni anbar store thaseand  ma sizeof(__)ni aabar je datatype lakhasu te memory ma ketla bits space rokase 
    printf("Size of int :- %12d bits\n",x);  //te value x ma store tahse and %d ni print thase
    x=sizeof(long int);
	printf("Size of long int :- %7d bits\n",x);
	x=sizeof(float);
    printf("Size of float :- %10d bits\n",x);
    x=sizeof(char);
    printf("Size of char :- %11d bits\n",x);
    x=sizeof(double);
    printf("Size of double :- %9d bits\n",x);
    x=sizeof(long double);
    printf("Size of long double :- %4d bits\n\n\n",x);

//  sizeof(variable)
    printf("sizeof(variable)\n\n");
    int a,b;
    float c;
    char ch;
    double d1;
    a=sizeof(b);                                 //sizeof(__)ni aabar je variable lakhasu te intger hoy teta " 4 bits " character " 1 bits "" float " 8 bits " memory ma space rokase.                      
    printf("Size of int variable :- % 5d bits\n",a);    // and te digit a ma store thase and %d thi printf ma print thase.
    a=sizeof(c);
    printf("Size of float variable :- %3d bits\n",a);
    a=sizeof(ch);
    printf("Size of ch variable :- %6d bits\n",a);
    a=sizeof(d1);
    printf("Size of double variable :- %2d bits\n\n\n",a);

// sizeof(constant)
    printf("sizeof(constant)\n\n)");
    int i,j,k;
    i=sizeof(34);                                // 34 te intger che atle te memory ma "4bits" size rokase              
    printf("size of int constant :-%4d bits\n",i);
    j=sizeof(3.56);                             // 3.56 ae float value che but te tene double jetli size rokase and double gane se double ni size flout karta vadhre hoy che atle te point vali value ne vadhre accuracy thi store kar se. 
    printf("size of float constant :- %2d bits\n",j); // "3.56" ni size 8 print thse.
    k=sizeof('a');                              //'a' character constant pan intger ni jem store thase becomes 'a' ae binary ma store thase nahi to tene store kar va mate ASCII codeno use thase and te intger ma hoy che 
    printf("size of char constant :- %3d bits\n\n\n",k);  //'a' ni size 4 print thse.



printf(" ***** USER ENTED VALUE SPACE IN MEMORY sizeof() ***** \n\n");
    
	printf("\t** Integr ** \n");
	int A,B;
    printf("Enter a any Number :- ");
    scanf("%d",&A);
    B=sizeof(A);
    printf("Size of %d = %d bits \n\n",A,B);

	printf("\t** Float value ** \n");
	float e,f;
    printf("Enter a any Flout value :- ");
    scanf("%d",&e);
    f=sizeof(e);
    printf("Size of %d = %d bits \n\n",e,f);    
    
	printf("\t** Character ** \n");
	char C,D;
    printf("Enter a one Letter :- \n");
    scanf("%d",&C);
    D=sizeof(C);
    printf("Size of %d = %d bits \n\n",C,D);
	
	printf("\t** storing value ** \n");
	
	int G;
    G=sizeof("zeel bhanderi");
    printf("Size of zeelbhanderi = %d bits \n",G); 
    return 0;
}
