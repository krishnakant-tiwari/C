#include<stdio.h>

int main()
{
    for(int i=5; i>=0; i--)
    {
      for(int j=0; j<=i; j++)
      {
      printf("*");
      }
      printf("\n");
    }
    
    for(int i=0; i<=5; i++)
    {
      for(int j=0; j<=i; j++)
      {
      printf("*");
      }
      printf("\n");
    }
    return 0;
}

# Output Console 
******
*****
****
***
**
*
*
**
***
****
*****
******
