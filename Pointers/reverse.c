#include <stdio.h>
int main()
{
    int a[5];
    int *ptr, i;
    ptr = &a[4];
    printf("Enter the array elements : ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
        ;
    {
        printf("%d", a[i]);
    }
    printf(" \n Display Element in reverse order using poniter \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d \n", *ptr);
        ptr--;
    }
    return 0;
} 