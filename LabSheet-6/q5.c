#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}
int main()
{
    int  a =10;
    int b = 69;
    printf("Before swapping a=%d and b = %d\n",a,b);
    swap(&a,&b);
     printf("After swapping a=%d and b = %d\n",a,b);
    return 0;
}