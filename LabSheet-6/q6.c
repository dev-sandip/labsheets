// WAP to take two float number in main(). Write a function single user define function calculator() to perform the addition, subtraction and multiplication. The sum, difference and product should be displayed from the main() function. [Use the concept of pass by reference.].

#include<stdio.h>
float calculator(float *a,float *b,float *sum,float *diff, float *product){
    *sum=*a+*b;
    *diff=*a-*b;
    *product=*a * *b;
}
int main(){
    float a,b,sum,diff,product;
    printf("Enter the value of  a and b:");
    scanf("%f%f",&a,&b);
     calculator(&a,&b,&sum,&diff,&product);
    printf("Sum=%f\n Difference=%f\n product=%f",sum,diff,product);
    return 0;
}