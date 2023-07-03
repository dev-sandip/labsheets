// WAP to display the number in reverse order.
#include<stdio.h>
int main()
{
 int n;
 int num=0;
 printf("Enter the number:");
 scanf("%d",&n);
 while(n!=0)
 {
 num=num*10+n%10;
 n= n/10;
 }
 printf("The number in reverse order is:%d",num);
 return 0;
}