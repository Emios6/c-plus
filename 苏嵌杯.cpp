#include<stdio.h>
int max(int x,int y);       //函数原型声明
int main()
{
   int a,b,c;
   scanf("%d,%d",&a,&b);
   c=max(a,b);
   printf("max is %d \n",c);
}
int max(int x,int y)      //函数定义
{
   int z;
   z=x>y?x:y;
   return(z);
}

