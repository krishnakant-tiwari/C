// Calculating the sum of arrry elements

#include<stdio.h> 

int main() {

    int arr[5];
    int sum = 0;

    printf("Enter the array elements : ");

    for(int i=0; i<5; i++)  // getting array elements by user
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++) // calculating the sum
    {
        sum = sum + arr[i];
    }

    printf("\n The sum = %d",sum); // printing sum of array elments

    return 0;

}