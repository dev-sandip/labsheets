// Pattern To be printed!!

//     * 
//    ***
//   *****
//  *******
// *********
#include <stdio.h>
    
int main()
{
    int i,j,n=5,space;
    for (i=1;i<=n; i++){
    for (space=n-i; space>=1; space--){
       printf(" ");
    }
    for(j=2*i-1; j>=1; j--){
    printf("*");
    }
printf("\n");
    }
    return 0;
}