#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            if (i == j || i == 5)
                printf("*");
            else
                printf(" ");
        }
        for (j = 1; j <= 5; j++)
        {
            if (i == j || i == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
