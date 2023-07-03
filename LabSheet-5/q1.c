//WAP to read 10 numbers from user and find their sum and average.
#include<stdio.h>
int main (){
int a;
int sum=0;;
float average=0;
printf("Enter the numbers to find the sum\n");
for( int i=0; i<10; i++){
    scanf("%d",&a);
      sum = sum+a;
    average = (float) sum/10;
      
}
printf("Your Sum is %d\n",sum);
printf("Your Average is %.2f",average);
    return 0;
}