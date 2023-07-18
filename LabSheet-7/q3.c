// WAP to sort n elements of array in descending order.
#include <stdio.h>
void input(int a[], int n){
    int i;
    printf("Enter the elements:");
    for(i=0; i<n;i++){
       
        scanf("%d", &a[i]);
    }
}  
void display(int a[],int n){
    int i;
    printf("The elements in descending order  are:\n");
    for (i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
}
int main()
{
    int a[100],n;
    printf("How many elements do you want to enter");
    scanf("%d", &n);
    input(a,n);
    bubble_sort(a,n);
    display(a,n);
    return 0;
}