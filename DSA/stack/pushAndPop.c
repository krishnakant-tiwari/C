// write a program to perform push and pop operation in stack data structure using array

#include<stdio.h>
#include<stdlib.h>
#define maxSize 5

int top = -1;        //intialzing top with -1 as array starts from 0 index -1 will show no element in the stack
int stack[maxSize];  // declaring array to use as stack

void push();         // function declaration
void pop();          // function declaration
void show();         // function declaration

int main()
{
    int choice;

    while(1)      // while loop for infinite attempts
    {
        printf("Perform operations on the stack:\n");
        printf("1.Push the element\n2.Pop the element\n3.Show the elements\n4.Exit\n\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            show();
            break;

            case 4:
            exit(0);              // loop break condition

            default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}

//  push algorithm in Stack
// 1. define stack[], maxSize, top = -1, newElement
// 2. if(top == maxSize-1)
//     print "Overflow" & exit
// 3. top = top + 1
//     stack[top] = newElement
//     print "new element inserted"
// 4. exit      
void push()
{
    int x;

    if(top == maxSize-1)
    {
        printf("Overflow!\n");
    }
    else 
    {
        printf("Enter the element in stack: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
        printf("Element %d is inserted\n", stack[top]);
    }
}

//pop algorithm in Stack
// 1. deine stack[], maxSize, top = -1, newElement
// 2. if top == -1
//     print "Underflow" and exit 
// 3. print "element is deleted"
//     top = top - 1
// 4. exit         
void pop()
{
    if(top == -1)
    {
        printf("Underflow!\n");
    }
    else
    {
        printf("The element %d is deleted\n", stack[top]);
        top = top - 1;
    }
}

void show()
{
    if(top == -1)
    {
        printf("The stack is empty!\n");
    }
    else 
    {
        printf("Elements in the stack are:\n");

        // printing stack elements
        for(int i=top; i>=0; i=i-1)
        {
            printf("%d\n", stack[i]);
        }
    }
}