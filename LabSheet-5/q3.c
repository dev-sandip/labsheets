//  WAP to input two integer values from the user and print the even number between the
// range of integers. Also count the even number and display the count as well [Hint: if
// user enters 10 and 100. The program should print and count even numbers between 10
// and 100].
#include <stdio.h>
int main(){
int  a,b;
int count =0;
printf("Enter the numbers :\n");
scanf("%d%d",&a,&b);
for ( int i = a;i<=b; i++){
  if (i%2==0)
   count++;  
    printf("%d is even \n",i);
           
}
printf("The total number of even numbers between %d and %d is %d",a,b,count);
    return 0;
}