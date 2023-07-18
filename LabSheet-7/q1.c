//  WAP to store 10 integer elements in an array and print it.
#include <stdio.h>
    
int main()
{
    int a[10],i;
    printf("Enter the 10 values to store in array:\n");
    for (i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are \n");
    for (i=0; i<10; i++){
       printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}