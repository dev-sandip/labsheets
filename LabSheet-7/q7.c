// WAP to find the transpose of the matrix
#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,m,n;
    printf("Enter the order first of matrix:");
    scanf("%d %d",&m,&n);
 printf("Enter the first matrix");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        b[i][j]=a[j][i];
    }
}
printf("The transpose of given matrix is :\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}


    return 0;
}