#include <stdio.h>
 
int main ()
{
   int a = 4;
   short b;
   double c;
   int* ptr;
 
   /* sizeof 运算符实例 */
   printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a) );  //4 
   printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b) );  //2 
   printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c) );  //8 
 
   /* & 和 * 运算符实例 */
   ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
   printf("a 的值是 %d\n", a);  // 4 
   printf("*ptr 是 %d\n", *ptr); // 4 
 
   return 0;
}
