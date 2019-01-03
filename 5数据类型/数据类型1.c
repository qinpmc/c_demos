#include <stdio.h>
#include <stdbool.h>

int main ()
{
    char c1 = "a";
    printf("���Ϊ��%d\n",sizeof(c1)); //1 
    
    short s1 = 20;
    printf("���Ϊ��%d\n",sizeof(s1)); //2 
    
    int i1 = 225;
    printf("���Ϊ��%d\n",sizeof(i1)); //4 
    
    long l1 = 333333333;
    printf("���Ϊ��%d\n",sizeof(l1)); //4 
    
   	long long ll1 = 333333333;
    printf("���Ϊ��%d\n",sizeof(ll1)); //8
	
	unsigned int ui1 = 1;
	printf("���Ϊ��%d\n",sizeof(ui1)); //4
	
	float f1 = 1.0;
	printf("���Ϊ��%d\n",sizeof(ui1)); //4
	
	double d1 = 10.0;
	printf("���Ϊ��%d\n",sizeof(d1)); //8
	
	long double ld1 = 10.0;
	printf("���Ϊ��%d\n",sizeof(ld1)); //16
	
	bool b = 6>5;
	printf("���Ϊ��%d\n",sizeof(b)); //1
	
    return 0;
}
