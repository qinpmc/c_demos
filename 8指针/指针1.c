#include <stdio.h>

int add(int num1,int num2);  //º¯ÊıÉùÃ÷

int main ()
{
 	int i=9;
	printf("%x\n",&i) ; //62fe48
 	printf("%p\n",&i) ; //000000000062FE48
 	
 	int p = (int)&i;
 	printf("%x\n",p) ;  //62fe48
    return 0;
}

 
 
