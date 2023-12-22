#include<stdio.h>

int main() {

    int arr[5][5];  // declaring 2-diamentional array

    printf("Enter the array elements : ");

    for(int i=0; i<5; i++)  // getting the array elements by user 
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<5; i++)     // printing the array elements entered by user 
    {
        for(int j=0; j<5; j++)
        {
            printf("\t arr[%d][%d] = %d",i,j,arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}