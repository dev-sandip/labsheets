#include <stdio.h>
    
int main()
{
    int a,b;
    printf("Enter the number to check whether it is vowel or not:\n");
    scanf("%d", &a);
    (a%2==0)?printf("Your %d number is even.\n",a):printf("Your %d number is odd.\n",a);
    return 0;
}