#include <stdio.h>
 
int main ()
{
 	int i = 6;
 	printf("&i=%p\n",&i); //62FE4C
 	f(&i);
 	g(i);  //99
    return 0;
}

void f(int *p){ //函数接收一个地址 
	printf("p=%p\n",p) ; //62FE4C
	printf("*p=%d\n",*p) ; // 6
	*p =99;
}

void g(int k){
	printf("k=%d\n",k);
}
