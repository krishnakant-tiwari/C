#include<stdio.h>

int main() {

    char str1[] = "Hello! ";
    char str2[] = "How are you?";
    char str[50];
    int i,j;

    for(i=0; str1[i]!='\0'; i++)
    {
        str[i] = str1[i];
    }

    for(int j=0; str2[j]!='\0'; j++, i++)
    {
        str[i] = str2[j];
    }

    str[i] = '\0';   
    printf("%s",str);

    return 0;

}