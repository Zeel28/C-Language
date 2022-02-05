#include <stdio.h>
int main()
{
	// \b For backspace

	/* printf("zeel\b"); ---------> zee"l"
	   printf("zeel\bfenil"); ----> zeefenil
	   printf("zeel\b\bfenil");-> zefenil
	*/

	/* \b jya hase tena aagna letter par cursor aav se
	and\b pachi aapde word type karshu to\b no aaga no letter printf thase nahi */
	printf("zeel\b \n");
	printf("zeel\bfenil");
	return 0;
}
