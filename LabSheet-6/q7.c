//  WAP to input a integer number in main(). Write a user define function isPrime() to
// calculate whether the number is prime of not. Print whether the number is prime or
// not from the main().
#include <stdio.h>
int isPrime(int n){
    int flag=0;
    if (n ==0 && n==1){
        flag=1;
    }else {
        for (int i =2 ; i <=n/2; i++){
            if (n%i==0){
                flag++;
                break;
            }
        }
    }
return flag;
}
int main()
{
    int n, result;
    printf("Enter the number to check weather it is prime or not");
    scanf("%d", &n);
    result= isPrime(n);
    if (result==0){
        printf("%d is prime number",n);
    }else {
        printf("%d is not a prime number",n);
    }
    return 0;
}