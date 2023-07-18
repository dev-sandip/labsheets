// WAP to multiply matrix of different size if possible using 2D array
#include <stdio.h>
    
int main()
{
    int a[100][100],b[100][100],c[100][100],m,n,p,q,i,j,k;
    printf("Enter the order first of matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the order second of matrix:");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix cannot not be mutlipled due to unequal order of matrix");

    }else{
printf("Enter the first matrix");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the second matrix");
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<m;i++){

    for(j=0;j<q;j++){
        c[i][j]=0;
        for(k=0;k<n;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}

printf("The results of matrix is \n");
for(i=0;i<m;i++){
    printf("|");
    for(j=0;j<q;j++){
        
        printf("%d\t",c[i][j]);
    }printf("|\n");

}



    }
    return 0;
}