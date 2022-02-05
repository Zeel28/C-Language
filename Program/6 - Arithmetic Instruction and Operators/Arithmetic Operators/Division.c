#include<stdio.h>
int main()
{
	printf("\t Division ( / )\n");
	printf("Ex : 1\n\n");
	
	int a=8,b=4,c;
	c=a/b;
	printf("A = 8  \n");
	printf("B = 4  \n");
	printf("C = A/B\n\n");
	printf("C = %d \n\n-----------------\n",c); 	/* c = 2        2 = print 
														       	   ____
																4 |  9
														      	  |- 8
														      	  | ___
	                                                                 0           	*/
	printf("Ex : 2\n\n");
	
	int m=3,n=4,o;
	o=m/n;
	printf("X = 3  \n");
	printf("Y = 4  \n");
	printf("Z = X/Y\n\n");
	printf("Z = %d \n\n-----------------\n",o);  	/* c = 0.75    0.75  = Quotient(print) 
														       	   ____
Note : 3/4 karta 0 print thashe but 3/4 karta ans               4 |  30
       to 0.75 aavo joiye.	     							  	  |- 28
	 : because c language ma rule che ke  jayare		      	  | ____
       koi two integer vache opertion thai to ans                 |  20
	   ineger j aavshe.                                           |  20
	   Ex : 11/6 , 11/5  etc                                      |	____
	                											     00
==>  3   / 4   =  00 												 
     3.0 / 4   = 0.75
	 3   / 4.0 = 0.75
	 3.0 / 4.0 = 0.75												
	 
==> this Example 2 ma datatype integer che to ans integer aavshe jo datatype
    float hoy to ans float(real) aavshe.  				                            	*/

printf("Ex : 3\n\n");
	
	float x=3.0,y=4,z;
	z=x/y;
	printf("X = 3  \n");
	printf("Y = 4  \n");
	printf("Z = X/Y\n\n");
	printf("Z = %f \n\n-----------------\n",z); 	/* c = 0.75    0.75  = print 
														       	   _____
																4 |  30    
														      	  |- 28
														      	  | ____
	                                                              |  20
																  |	 20
																  |	____            
																	 00	*/

	return 0;
}
