#include<studio.h>
int main()
{
 int a,b;
 printf("enter the value of a and b:");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("the value of a=%d and b=%d after swapping",a,b);
 return 0;
}
