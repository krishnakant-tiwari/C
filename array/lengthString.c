// Calculating the length of the string by strlen()

#include<stdio.h>
#include<string.h>

int main() {

    char str1[] = "Hello dear, How are you ?";
    int n;

    n = strlen(str1);

    printf("The length of the string is = %d \n",n);

    // By taking user input

    char str[100];

    printf("Enter your message : ");

    gets(str);

    int m = strlen(str);

    printf("The length of the string is %d",n);

    return 0;

}