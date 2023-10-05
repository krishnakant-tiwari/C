// Adding two or more strings 

#include<stdio.h>        
int main()
{
    char str1[5]="Ram ";
    char str2[8]="Narayan ";
    char str3[15]="Tiwari Sir";
    char str[30];

    int i,j,k,a;

    for( i=0; str1[i]!='\0'; i++ )
    {
        str[i]=str1[i];
    }

    for( j=0; str2[j]!='\0'; j++)
    {
        str[i]=str2[j];
        i++;
    }

     for( k=0; str3[k]!='\0'; k++)
    {
        str[i]=str3[k];
        i++;
    }

    str[i]='\0';

    for( a=0; str[a]!='\0'; a++ )
    {
        printf("%c",str[a]);
    }
    
    // Or print str

    printf("\n\nAnswer String\n\n%s\n\n",str);

    return 0;
}