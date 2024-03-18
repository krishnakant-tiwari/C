#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements n\n");
    scanf("%d", &n);

    /* allocating memory by calloc() */
    ptr = (int *)calloc(n, sizeof(int));

    /* Taking input by user */
    printf("Enter the value of array\n");
    for(int i=0; i<n; i++)
    {   
        printf("index[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    /* printing the elemetns */
    printf("The elements entered by you\n");
    for(int i=0; i<n; i++)
    {
        printf("The element in Index[%d] is %d\n", i, ptr[i]);
    }

    /* Reallocating the memory by rellac() */
    int m;
    printf("Enter the new size of allocation : ");
    scanf("%d", &m);
    ptr = realloc(ptr, m);

    /* Taking input by user */
    printf("Enter the value of array\n");
    for(int i=0; i<m; i++)
    {   
        printf("index[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    /* printing the elements */
    printf("The elements entered by you\n");
    for(int i=0; i<m; i++)
    {
        printf("The element in Index[%d] is %d\n", i, ptr[i]);
    }

    /* releasing the allocated space using free() */
    free(ptr);

    return 0;

}
