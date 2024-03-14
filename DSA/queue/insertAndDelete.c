// program to perform insertion, deletion and show element operation in Queue data structrue using array

#include<stdio.h>
#include<stdlib.h>
#define maxSize 5

void insert();
void delete();
void show();

int front = -1, rear = -1;
int queue[maxSize];

int main()
{
    int choice;

    while(1)
    {
        printf("Perform operations in the Queue:\n");
        printf("1.Insert element\n2.Delete element\n3.Show elements\n4.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;

            case 3:
            show();
            break;

            case 4:
            exit (0);

            default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}

void insert()
{
    int item;
    if(rear == maxSize-1)
    {
        printf("Overflow!\n");
    }
    else if(front == -1 && rear == -1) 
    {
        front = rear = 0;
    }
    else 
    {
        rear = rear + 1;
    }
    printf("Enter element in the queue: ");
    scanf("%d", &item);
    queue[rear] = item;
    printf("Element inserted!\n");
}

void delete()
{
    int item;
    if(front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else 
    {
        printf("Element deleted from the queue\n");
        front = front + 1;
    }
}

void show()
{
    int i;
    if(front == -1)
    {
        printf("Underflow!\n");
    }
    else 
    {
        printf("Element present in the Queue\n");
        for(i = front; i<=rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}