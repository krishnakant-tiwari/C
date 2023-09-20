#include<stdio.h>



int main()

{

    int a1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    

    printf("Before Transpose The Matrix is \n");

    

    for(int i=0; i<=2; i++)

    {

      for(int j=0; j<=2; j++)

      {

      printf("%d ",a1[i][j]);

      }

      printf("\n");

    }

    

    printf("After Transpose The Matrix is \n");

    for(int i=0; i<=2; i++)

    {

      for(int j=0; j<=2; j++)

      {

      printf("%d ",a1[j][i]);

      }

      printf("\n");

    }

    return 0;

}
