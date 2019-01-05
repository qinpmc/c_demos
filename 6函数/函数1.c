#include <stdio.h>

int add(int num1,int num2);  //º¯ÊıÉùÃ÷

int main ()
{
    int num = 99;
    int res = isPrime(num);
	printf("%d\n",res); //0 

	printf("%d",add(1,2)); //3
    return 0;
}

int add(int n1,int n2){
	return n1+n2;
}
int isPrime(int i){
	int res = 1;
	int k;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			res = 0;
			break;
		}
	}
	return res;
} 
