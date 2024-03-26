#include<stdio.h>

int main() {

    int arr[5];

    printf("Enter the 5 array elements : ");

    // taking input from user
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    // printing array elements 
    for(int i=0; i<5; i++)
    {
        printf("\n arr[%d] = %d",i+1,arr[i]);
    }

    return 0;
}
