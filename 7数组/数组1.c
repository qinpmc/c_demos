#include <stdio.h>

int add(int num1,int num2);  //��������

int main ()
{
 	int balance[5] = {1000, 2, 3, 7, 50};
 	int length = sizeof(balance)/sizeof(balance[0]);
 	printArray(balance,length);
 
    return 0;
}

 
int printArray(int arr[],int len){
 	
 	// ������Ϊ�����������䳤�Ȳ����ں����ڼ������鳤�� 
 	printf("���������鳤�ȣ�%d\n",sizeof(arr)/sizeof(arr[0])); //2  
 	int i ;
 	for(i = 0;i<len;i++){
 		printf("%d\n",arr[i]);
	 }
} 
