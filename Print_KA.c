#include<stdio.h>

int main()
{
    for(int i=1; i<=6; i++)
    {
      for(int j=1; j<=7; j++)
      {
      if( i==1 || j==4 || i==2&&j!=1&&j!=3&&j!=5&&j!=7 || i==3&&j!=2&&j!=6 || i==4&&j!=2&&j!=4&&j!=5&&j!=6 || i==5&&j!=1&&j!=3&&j!=4&&j!=5&&j!=6 )
      printf("*");
      else
      printf(" ");
      }
      printf("\n");
    }
    return 0;
}
    