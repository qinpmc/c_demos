# include <stdio.h>
int main(){

	const int PI = 3;
	int price =0;
	printf("%d",PI);
	printf("请输入金额（元）： ");
	scanf("%d", &price);
	int change = 100 - price;
	printf("找 %d 元\n",change);	
	
} 

