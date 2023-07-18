#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The value of a is %d and the value of b is %d",a,b);
return 0;
}