#include <stdio.h>
#include <stdbool.h>

int main ()
{
 	float a,b,c;
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if(c == 2.468){
		printf("���\n");
	} else{
		printf("�����! c = %.10f,��%f\n",c,c);
	}
	
    return 0;
}
