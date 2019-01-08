#include <stdio.h>
#include <stdbool.h>

int main ()
{
 	short s1= 327;
 	printf("%d\n",s1);  //327
	int i1= (int)s1;
 	printf("%d\n",i1); //327
 	
 	int i2 = 32768;
 	
 	short s2= (short)i2;
 	printf("%d\n",i2); //32768
 	printf("%d\n", );  // -32768
    return 0;
}
