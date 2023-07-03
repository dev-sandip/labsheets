//WAP to check whether a number is a palindrome or not.
#include<stdio.h>
int main()
{
  int n;
 int num=0;
 printf("Enter the number:");
 scanf("%d",&n);
 int original_num = n;
 while(n!=0)
 { 
 num=num*10+n%10;
  n= n/10;
 }
if( num == original_num)
printf("%d is palindrome",original_num);
else printf("%d is not palindrome",original_num);

 return 0;
}