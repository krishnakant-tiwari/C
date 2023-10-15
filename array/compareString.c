#include<stdio.h>
#include<string.h>

int main() {

    char str1[] = "Hello";
    char str2[] = "Hello";
    int n;

    n = strcmp(str1, str2);  /*It returns 0 if strings are equal, Positive value if first string is larger and negative value if second string is larger*/

    if(n==0)
    {
        printf("Both strings are equal");
    }
    else {
        if(n>0)
        {
            printf("The string 1 is larger");
        }
        else {
            printf("The string 2 is larger");
        }
    }
    return 0;

}