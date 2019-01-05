#include <stdio.h>

int add(int num1,int num2);  //函数声明

int main ()
{
 	int balance[5] = {1000, 2, 3, 7, 50};
 	int length = sizeof(balance)/sizeof(balance[0]);
 	printArray(balance,length);
 
    return 0;
}

 
int printArray(int arr[],int len){
 	
 	// 数组作为函数参数，其长度不能在函数内计算数组长度 
 	printf("函数内数组长度：%d\n",sizeof(arr)/sizeof(arr[0])); //2  
 	int i ;
 	for(i = 0;i<len;i++){
 		printf("%d\n",arr[i]);
	 }
} 
