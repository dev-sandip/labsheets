// WAP to calculate and print the sum and average of n elements of array.

#include <stdio.h>
    
int main()
{
    int a[100],i,n,sum=0, average;
    printf("How many values do you want to enter?\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n ",n);
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum = sum+ a[i];
    average= sum /n;
    }
    printf("The sum of array is %d\n",sum);
    printf("The average is %d\n",average);
    return 0;
}