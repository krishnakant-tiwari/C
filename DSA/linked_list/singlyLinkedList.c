#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void beginInsert();
void lastInsert();
// void randomInsert();
// void beginDelete();
// void lastDelete();
// void randomDelete();
// void searchElement();
// void displayElement();

struct node *head;

void beginInsert()
{
    struct node *newNode;
    int value;
    newNode = (struct node *) malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);
        newNode -> data = value;
        newNode -> next = head;
        head = newNode;
        printf("\nNode inserted\n");
    }
}

void lastInsert()
{
    struct node *newNode, *temp;
    int value;
    newNode = (struct node *) malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("\nOverflow");
    }
    else 
    {
        printf("Enter value: ");
        scanf("%d", &value);
        newNode -> data = value;
        if(head == NULL)
        {
            newNode -> next = NULL;
            head = newNode;
            printf("\nNode inserted");
        }
        else 
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> next = NULL;
            printf("\nNode inserted");
        }
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n\nChoose one option form the following list\n");
        printf("1.Insert at beginning\n2.Insert at last\n3.Insert at random location\n4.Delete from beginning\n5.Delete from last\n6.Delete form random location\n7.Search an element\n8.Display elements\n9.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 :
                beginInsert();
                break;
            case 2 : 
                lastInsert();
                break;
            // case 3 :
            //     randomInsert();
            //     break;
            // case 4 :
            //     beginDelete();
            //     break;
            // case 5 :
            //     lastDelete();
            //     break;
            // case 6 :
            //     randomDelete();
            //     break;
            // case 7 :
            //     searchElement();
            //     break;
            // case 8 :
            //     displayElement();
            //     break;
            case 9 :
                exit(0);
            default :
                printf("Invalid Choice! Please enter a valid choice\n");

        }
    }

    return 0;
}