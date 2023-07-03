// WAP to display sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n

#include<stdio.h>
int main (){
    int n;
    float sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
for (int i =1; i <=n; i++){
sum = sum +(float) (1.0/i);   
}
printf("The sum of series is %f",sum);
    return 0;

}