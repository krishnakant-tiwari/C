#include<stdio.h>
int main()
{
    char s[50];
    char *ptr;
    int v=0,c=0,d=0;
    puts("Enter the string");
    gets(s);
    ptr = &s;
    while(*ptr!='\0')
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
        v++;
        else if(*ptr=='0' || *ptr=='1' || *ptr=='2' || *ptr=='3' || *ptr=='4' || *ptr=='5' || *ptr=='6' || *ptr=='7' || *ptr=='8' || *ptr=='9')
        d++;
        else
        c++;
        ptr++;
    }
    printf("Total Number of Vovel is = %d \n",v);
    printf("Total Number of Consonent is = %d \n",c);
    printf("Total Number of Digit is = %d \n",d);
    return 0;
}