//print the following pattern

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 14

#include <stdio.h>
    
int main()
{
    int i,j, flag=1;
for(i=1;i<=5;i++){
    for (j=1; j<=i; j++){
        printf("%d ",flag);
        flag++;
    }

printf("\n");
}
    return 0;
}