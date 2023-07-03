// WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn /n!
#include<stdio.h>
#include<math.h>
long factorial (int n){
   if(n==0)
   return 1;
   else 
   return n*factorial(n-1);
}
int main(){
    int n;
    int x;
    float sum =0;
    printf("Enter the numbers of elements in series\n");    
scanf("%d",&n);
   printf("Enter the value of x\n");    
scanf("%d",&x);
for(int i=1; i<=n; i++){
sum = sum + (float)(pow(x,i))/factorial(i);
}
printf("The sum of series is %f",sum);
return 0;
}