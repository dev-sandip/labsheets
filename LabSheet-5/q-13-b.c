// print the following pattern:
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

#include <stdio.h>
    
int main()
{
    int i,j;
for (i=1; i<=5; i++){

    for(j=1;j<=6-i;j++){
        printf("%d ",j);
    }
    printf(" \n");
} 
    return 0;
}