// Write a program to add, subtract, multiply and divide two integers using user defined
// function add(), sub(), mul() and div().

#include <stdio.h>
int add (int a,int b){
return a +b;
}
int sub (int a,int b){
return a-b;
}
int mul (int a,int b){
return a*b;
}
int div (int a,int b){
return a/b;
}
int main()
{
    int a , b;
    printf("Enter the numbers");
    scanf("%d %d", &a,&b);
    printf("The sum is %d\n",add(a,b));
    printf("The subtraction is %d\n",sub(a,b));
    printf("The multiplication is %d\n",mul(a,b));
    printf("The division is %d",div(a,b));
    return 0;
}