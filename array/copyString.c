// assigning or coping one string to another with strcpy()

#include<stdio.h>
#include<string.h>

int main() {

    char str1[] = "Hello";
    char str2[20];

    strcpy(str2,str1);  // assignnig the string 1 to string 2

    printf("%s ",str1);
    printf("%s ",str2);

    strcpy(str2,"Jay Shree Ram"); // assigning Jay Shree Ram to string 2

    printf("%s ",str1);
    printf("%s ",str2);

    return 0;

}