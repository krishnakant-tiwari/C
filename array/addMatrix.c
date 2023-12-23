// Adding Two Matrices in C language

#include <stdio.h>

int main()
{   
    // Declaring Matrices
    int m, n;
    printf("Enter the first matrix\n");
    printf("Enter the number of rows : ");
    scanf("%d", &m);
    printf("Enter the number of columns : ");
    scanf("%d", &n);

    int arr1[m][n];
    int sum[m][n];

    int o, p;
    printf("Enter the second matrix\n");
    printf("Enter the number of rows : ");
    scanf("%d", &o);
    printf("Enter the number of columns : ");
    scanf("%d", &p);
    int arr2[o][p];

    // Taking Inputs in The Matrices
    // Taking inputs in first matrix 
    printf("Enter the values of first matrix\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("index[%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Taking inputs in second matrix 
    printf("Enter the values of second matrix\n");
    for(int i=0; i<o; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("index[%d][%d]:", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Adding Matrices
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing The Sum Matrix
    printf("The sum matrix is\n");
    for(int i=0; i<o; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;

}