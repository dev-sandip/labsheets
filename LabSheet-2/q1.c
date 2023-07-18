#include <conio.h>
#include <stdio.h>
void main()
{
int a;
float b;
char z;
printf("Enter the value of a:");
scanf("%d", &a);
printf("Enter the value of b:");
scanf("%f", &b);
printf("Enter the value of ch:");
z = getche();
printf("\nYou Entered %c and size of the variable is %d. ", z, sizeof(z));
printf("\nThe value of a is %d and size is %d .", a, sizeof(a));
printf("\nThe value of b is %f and size is %d.", b, sizeof(b));
}