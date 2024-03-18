/* Write a program to take 10 inputs in an Array from user and find sum of their squares*/

#include <stdio.h>

int main()
{

// Declaring array
int arr[10];
// Declaring sum variable with initial value 0
int sum = 0;

// Taking inputs from user in array
printf("Enter 10 array elements : ");
for(int i=0; i<10; i++)
{
    scanf("%d", &arr[i]);
}

// Calculating sum of squares of array elements
for(int i=0; i<10; i++)
{
    sum = sum + ( arr[i] * arr[i] );
}

// Printing Sum of array elements
printf("The sum of Squares of array elements is %d\n", sum);

    return 0;

}