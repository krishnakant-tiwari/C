// implementation of stack using arrayf

#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top = -1;

void push(int size)
{
    if(top == size - 1)
    {
        printf("Stack is overflow\n");
    }
    else 
    {
        printf("Enter element in stack:\n");
        scanf("%d", &stack[++top]);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is underflow\n");
    }
    else 
    {
        printf("%d is deleted\n", stack[top--]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is underflow\n");
    }
    else 
    {
        printf("Stack elements are:\n");
        int i;
        for(i=top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int size, choice;

    printf("Enter the size of the stack:");
    scanf("%d", &size);

    while(1)
    {
        printf("\n1 for Push");
        printf("\n2 for Pop");
        printf("\n3 for Display");
        printf("\n4 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 :
                push(size);
                break;

            case 2 :
                pop();
                break;

            case 3 : 
                display();
                break;

            case 4 :
                exit(0);

            default :
                printf("Invalid Choice\n");
                break;
        }
    }
    
    return 0;
}