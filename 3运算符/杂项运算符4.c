#include <stdio.h>
 
int main ()
{
   int a = 4;
   short b;
   double c;
   int* ptr;
 
   /* sizeof �����ʵ�� */
   printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a) );  //4 
   printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b) );  //2 
   printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c) );  //8 
 
   /* & �� * �����ʵ�� */
   ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
   printf("a ��ֵ�� %d\n", a);  // 4 
   printf("*ptr �� %d\n", *ptr); // 4 
 
   return 0;
}
