#include<stdio.h>
int p(int a, int b)
{
 if(a==b)
 {
 return a; 
 } 
 else
 {
 if(a>b)
 //function repter
 return p(a-b, b);
 else
 //function repter
 return p(a, b-a);
 }
}
int main()
{
 int a,b;
 printf("donner a:");
 scanf("%d",&a);
 printf("donner b:");
 scanf("%d",&b);
 printf("%d",p(a, b));
 return 0;
}
