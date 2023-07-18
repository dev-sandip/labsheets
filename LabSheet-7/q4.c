// WAP to count the frequency of the elements in an array.

#include <stdio.h>   
int main()
{
    int a[100],b[100],n,i,j, count=0;
    printf("How many elements do you want to enter:\n");
    scanf("%d", &n);
    printf("Now,Enter the elements of array:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        b[i]=-4;
    }
    for(i=0; i<n; i++){
        count=1;
    for (j=i+1;j<n;j++){
        if (a[i]==a[j]){
            count++;
            b[j]=0;
                    }
                    }
        if(b[i]!=0){
            b[i]=count;
                    }
    }
    printf("The frequency of the elements are:\n");
     for(i=0; i<n; i++){
        if(b[i]!=0){
        printf("a[%d] = %d\n",a[i],b[i]);
        }
    }

    return 0;
}