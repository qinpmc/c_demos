#include <stdio.h>
 
int main ()
{
    int count = 0;
	int num = 23121333;
	count++;
	num/=10; 
	
	// �ж�num�Ǽ�λ��
	while(num>0){
		count++;
		num/=10;
	}
	printf("���Ϊ��%d",count);
   return 0;
}
