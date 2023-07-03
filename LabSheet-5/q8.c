// WAP to display weather a number is Armstrong or not.
#include<stdio.h>
int main(){
int n,rem,sum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
int orginal_number=n;
while(n!=0){
    rem = n%10;
    sum = sum+rem*rem*rem;
    n=n/10;
}
if ( orginal_number == sum )
    printf("%d is a Amstrong Number",orginal_number);
else  printf("%d is not a Amstrong Number",orginal_number);
return 0;
}