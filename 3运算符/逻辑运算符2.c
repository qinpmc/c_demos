#include <stdio.h>
 
int main ()
{
   int i1 = 1;
   int j1 = 1;
   if(++i1>0 || ++j1>0){  // || ��·������j1δ ++  
   
   	printf(" i1��ֵ��%d\n", i1 );  //i1= 2
    printf(" j1��ֵ��%d\n", j1 );  //j1 = 1
   } 
   
   int i2 = 1;
   int j2 = 1;
   if(++i2>0 | ++j2>0){   // |  ����·����
   	printf(" i2��ֵ��%d\n", i2 );  //i2= 2
    printf(" j2��ֵ��%d\n", j2 );  //j2 = 2
   } 
   
   int i3 = 1;
   int j3 = 1;
   if(++i3<0 && ++j3>0){ //&& ��·������ j3 δ++ 
   	printf(" i3��ֵ��%d\n", i3 );  // 
    printf(" j3��ֵ��%d\n", j3 );  // 
   } else{
   		printf(" i3��ֵ��%d\n", i3 );  //i3= 2
    	printf(" j3��ֵ��%d\n", j3 );  //j3 = 1
   } 
   
   
   int i4 = 1;
   int j4 = 1;
   if(++i4<0 & ++j4>0){ //   &  ����·����
   	printf(" i4��ֵ��%d\n", i4 );  //
    printf(" j4��ֵ��%d\n", j4 );  //
   }else{
   	printf(" i4��ֵ��%d\n", i4 );  //i4= 2
    printf(" j4��ֵ��%d\n", j4 );  //j4 = 2
   }
 
   return 0;
}




