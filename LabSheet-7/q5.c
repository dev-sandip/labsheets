// WAP to pass 1D array to the minmax() function. The function should calculate the
// maximum and minimum among the elements of the array. Print the maximum and
// minimum in the main() function.
#include <stdio.h>
void minmax(int a[],int n,int *min,int *max){
    int i;
    *max,*min=a[0];
    for(i=0;i<n;i++){
        *max=(a[i]>*max)?a[i]:*max;
        *min=(a[i]<*min)?a[i]:*min;
    }
}
int main()
{
    int a[100],n,max,min,i;
     printf("How many elements do you want to enter?:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);
    }
minmax(a,n,&min,&max);
printf("Maxium number in array =%d\nMinimum number in array=%d",max,min);
    return 0;
}