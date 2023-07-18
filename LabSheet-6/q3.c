//  WAP to calculate factorial using Recursion.

#include <stdio.h>
    long factorial (int n){
   if(n==0)
   return 1;
   else 
   return n*factorial(n-1);
}
int main()
{
    int n,result;
    printf("Enter the number to find the factorial :\n");

 scanf("%d", &n);
 result= factorial(n);
 printf("The factorial of %d is %d",n,result);
    return 0;
}