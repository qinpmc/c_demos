#include <stdio.h>

int add(int num1,int num2);  //��������

int main ()
{
 	int arr[10] ;
	printf("%p\n",&arr) ; // 62FE20
 	printf("%p\n",arr) ; // 62FE20  ����ָ���ַ 
 	printf("%p\n",&arr[0]) ; // 62FE20
 	printf("%p\n",&arr[1]) ; // 62FE24
 	
    return 0;
}

 
 
