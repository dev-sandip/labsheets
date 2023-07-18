#include <stdio.h>
    
int main()
{
    int a,b,c;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    c= (a<b)?a:b;
    printf("The minimum number is %d",c);
    return 0;
}