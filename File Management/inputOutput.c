// A program to create text file, take input in the text file and display the content of the file on the console 

#include <stdio.h>

int main()
{   
    // Creating a file pointer 
    FILE *fptr;
    char ch;
    printf("Enter the data input in the file\n");

    // Opening the file in write mode
    fptr = fopen("text.txt", "w");

    // Get a charcter from the keyboard untill EOF(end of file)
    while((ch = getchar()) != EOF)
    {
        // write a character to text.txt 
        putc(ch, fptr);
    }
   
    // close the file text.txt 
    fclose(fptr);


    printf("printing the data of the file on the console\n");
   
    // Opening the file in the read mode 
    fptr = fopen("text.txt", "r");
 
    // Read a character from the keyboard untill EOF 
    while((ch = getc(fptr)) != EOF)
    {   
        // Display a character on the console 
        printf("%c", ch);
    }

    // Closing the file 
    fclose(fptr);

    return 0;

}