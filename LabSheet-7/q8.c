// WAP to find the sum of the rows and column of the matrix.
#include <stdio.h>
int main()
{
    int a[100][100], m, n, i, j,sumofrow,sumofcol;
    printf("Enter the order of the matrix:");
    scanf("%d%d", &m, &n);
    printf("Enter the matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        sumofrow=0;
        for (j = 0; j < n; j++)
         sumofrow=sumofrow+a[i][j];   
         printf("Sum of elements in row %d=%d\n",i+1,sumofrow);
    }

        for (j = 0; j < n; j++)
    {
        sumofcol=0;
 for (i = 0; i < m; i++)
         sumofcol=sumofcol+a[i][j];   
         printf("Sum of elements in col %d=%d\n",j+1,sumofcol);
    }

    return 0;
}