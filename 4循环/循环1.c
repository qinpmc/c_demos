#include <stdio.h>
 
int main ()
{
    int count = 0;
	int num = 23121333;
	count++;
	num/=10; 
	
	// 判断num是几位数
	while(num>0){
		count++;
		num/=10;
	}
	printf("结果为：%d",count);
   return 0;
}
