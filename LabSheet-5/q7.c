// WAP to find the value cos(x) without using cos(x) library function.
//series will be 1-x^2/2!+x^4/3!-x^6/6!.......

#include<stdio.h>
#include<math.h>
#define  PI 3.1415
long factorial(int n){
    int i;
    long fact=1;
    for (i=1; i<=n;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int sign =-1,i,n;
    float x,x1,sum=0;
    printf("Enter the value of x in degree and n");
    scanf("%f %d" ,&x,&n);
    x1=x;
    x=x*(PI/180);
    for(i=0;i<=n; i+=2){
        sign = (-1)*sign;
        sum = sum +sign* pow(x,i)/factorial(i);
    }
    printf("cos(%.0f)=%.2f",x1,sum);
    return 0;
}