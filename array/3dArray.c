/* Creating a 3-d Array */
#include<stdio.h>

int main()
{
    int arr[2][3][3];

    /* Taking the input in array by user */
    printf("Enter the array elements\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                printf("Index[%d][%d][%d] : ", i,j,k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    /* Printing the array elements */
    printf("The Three D Array Elements are\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;

}