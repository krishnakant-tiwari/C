// C program to perform Pointer Arithmetic
 
#include <stdio.h>
 

int main()
{
 

    // Declare an array

    int arr[3] = { 10, 100, 200 };
 

    // Declare pointer variable

    int* ptr;
 

    // Assign the address of arr[0] to ptr

    ptr = arr;
 

    for (int i = 0; i < 3; i++) {
 

        // print value at address which is stored in ptr

        printf("Value of *ptr = %d\n", *ptr);
 

        // print value of ptr

        printf("Value of ptr = %p\n\n", ptr);
 

        // Increment pointer ptr by 1

        ptr++;

    }

    return 0;
}
