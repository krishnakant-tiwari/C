#include<stdio.h>

int main() {

    int arr[5];

    printf("Enter the array elements : ");
    
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("\n arr[%d] = %d",i,arr[i]);
    }

    return 0;
}
