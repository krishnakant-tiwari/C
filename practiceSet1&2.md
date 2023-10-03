/* Practice Set-1 And Set-2 Provided by Ram Sir


Practice Set -I (C Programming)
 
1. Write a C program to input two numbers and perform all arithmetic 
operations.
2. Write a Program to check whether a given character is upper case, lower case, 
number or special character. 
3. Write a Program to find whether a given number is positive or negative. 
4. Write a Program to find a given number is either odd or even. 
5. Write a C program to input length and width of a rectangle and find area of 
the given rectangle
6. Write a C program to input radius of a circle from user and find diameter, 
circumference and area of the circle.
7. Write a C program to input base and height of a triangle and find area of the 
given triangle.
8. Write a C Program to input two angles from user and find third angle of the 
triangle.
9. Write a C program to input length in centimeter and convert it to meter and 
kilometer.
10. Write a C program to input temperature in Centigrade and convert to 
Fahrenheit.
11. Write a C program to input a year and check whether year is leap year or not 
using conditional/ternary operator ? : .
12. Write a C program to check whether a number is divisible by 5 and 11 or not 
using if else.
13. Write a C program to find maximum between two numbers using if else.
14. Write a C program to find maximum between three numbers using both 
ladder if else and nested if.
15. Write a C program to create menu driven calculator that performs basic 
arithmetic operations (add, subtract, multiply and divide) using switch case.


_________________________________________________________________________


*/


1. #include<stdio.h>
main()
{
   int a,b; 
   
   printf(“Enter first number :”);
   scanf(“%d”,&a):
   printf(“Enter second number :”);
   scanf(“%d”,&b);

   printf(“\nAdditon is %d \nSubtraction is %d \nMultiplication is %d \nDivision is %d”,a+b,a-b,a*b,a/b);

}
Output
Enter first number : 200
Enter second number : 100

Addition is 300
Subtracton is 100
Multiplicaton is 20000
Division is 2

_________________________________________________________________________

2. #include<stdio.h>
main()
{
 char c;
 printf(“Enter a character :”);
 scanf(“%c”,&c);

 if( c>=’a’ && c<=’z’)
 printf(“Given character is lowercase”);
	
 else if( c>=’A’ && c<=’Z’)
 printf(“Given character is uppercase”);

 else if( c>=’0’ && c<=’9’)
 printf(“Given character is a number”);

 else
 printf(“Given character is a special character”);
}

Output
Enter a character : @
Given character is a special character

_________________________________________________________________________


3. #include<studio.h>
     main()
     {
        int a;

        printf("Enter a number :");
        scanf("%d",&a);

        if(a<0)
        printf ("Given number is negative");
        else
        printf("Given number is positive");
     }
Output
Enter a number: 100
Given number is positive

_________________________________________________________________________


4. #include<studio.h>
     main()
     {
        int a;

        printf("Enter a number :");
        scanf("%d",&a);

        if(a%2===0)
        printf(" Given number is even");
        else
        printf("Given number is odd");
     }
    Output
Enter a number :799
Given number is Odd


_________________________________________________________________________

5. #include<stdio.h>
    main()
    {
       int length;
       int width;
       int area;

       printf("Enter the length of the rectangle :");
scanf("%d",& length);
printf("Enter the width of the rectangle :");
scanf ("%d",&width);

area = length*width;

printf("Area of the rectangle is %d",area);
    }
Output
Enter the length of the rectangle : 100
Enter the width of the rectangle : 200
Area of the rectangle is 20000


_________________________________________________________________________


6.
 #include<studio.h>
main()
{
int radius;
float circumference,area;
float pi = 3.14;

printf("Enter the radius of the rectangle :");
scanf("%d",& radius);

diameter = 2*radius;
circumference = 2*pi*radius;

printf("\nDiameter of the circle is %d \nCircumference of the circle is %f \nArea of the circle is%f", diameter, circumference,area);
}
Output
Enter the radius of the circle :100
Diameter of the circle is 200
Circumference of the circle is 628.000000
Area of the circle is 31400.000000


_________________________________________________________________________


7. #include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %f\n", area);

    return 0;
}
Output
Enter the base of the triangle: 6
Enter the height of the triangle: 8
The area of the triangle is: 24.000000


_________________________________________________________________________


8. 
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    angle3 = 180 - angle1 - angle2;

    printf("The third angle is: %f degrees\n", angle3);

    return 0;
}
Output
Enter the first angle: 30
Enter the second angle: 60
The third angle is: 90.00 degrees

_________________________________________________________________________


9. #include <stdio.h>

int main() {
    float centimeters, meters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    meters = centimeters / 100;
    kilometers = centimeters / 100000;

    printf("Length in meters: %.2f\n", meters);
    printf("Length in kilometers: %.4f\n", kilometers);

    return 0;
}
Output
Enter length in centimeters: 2500
Length in meters: 25.00
Length in kilometers: 0.0250

_________________________________________________________________________


10. #include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
Output
Enter temperature in Centigrade: 25
Temperature in Fahrenheit: 77.00

_________________________________________________________________________


11. #include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("%d is %s leap year.\n", year, isLeapYear ? "a" : "not a");

    return 0;
}
Output
Enter a year: 2024
2024 is a leap year.


_________________________________________________________________________


12. 
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11.\n", number);
    }

    return 0;
}
Output
Enter a number: 43
43 is not divisible by both 5and 11.

_________________________________________________________________________


13. #include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The maximum number is: %d\n", num1);
    } else {
        printf("The maximum number is: %d\n", num2);
    }

    return 0;
}
Output
Enter the first number: 7
Enter the second number: 12
The maximum number is: 12


_________________________________________________________________________



14. #include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the maximum.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the maximum.\n", num2);
    } else {
        printf("%d is the maximum.\n", num3);
    }

    return 0;
}
Output
Enter three numbers: 10
20
30
30 is the maximum

_________________________________________________________________________


#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the maximum.\n", num1);
        } else {
            printf("%d is the maximum.\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the maximum.\n", num2);
        } else {
            printf("%d is the maximum.\n", num3);
        }
    }

    return 0;
}
Output
Enter three numbers: 10 
20
30
30 is the maximum

_________________________________________________________________________

15. #include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("Menu Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %f\n", num1 / num2);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
Output
Menu Driven Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1/2/3/4): 1
Enter two numbers: 10
5
Result: 15.000000











Practice Set – II (C programming)

1. Write a C program to print all natural numbers from 1 to n using loop.
2. Write a C program to print all natural numbers in reverse from n to 1 using for 
loop.
3. Write a C program to print alphabets from a to z using for loop.
4. Write a C program to print all even numbers from 1 to n using for loop
5. Write a C program to find the sum of all natural numbers between 1 to n 
using for loop.
6. Write a C program to find sum of all odd numbers from 1 to n using for loop
7. Write a C program to input a number from user and print multiplication table 
of the given number using for loop.
8. Write a C program to input a number from user and count number of digits in 
the given integer using loop
9. Write a C program to input a number from user and find first and last digit of 
number using loop.
10. Write a C program to input a number and find sum of first and last digit of the 
number using for loop.
11. Write a C program to input a number from user and swap first and last digit of 
the given number.
12. Write a C program to input a number and calculate sum of digits using for 
loop.
13. Write a C program to input a number from user and find reverse of the given 
number using for loop
14. Write a C program to find power of a number using for loop.
15. Write a C program to input a number and calculate its factorial using for loop.
16. Write a C program to input a number from user and calculate product of its 
digits.
17. Write a C program to input a number from user and find all factors of the 
given number using for loop.
18. Write a program in C to input a number and check whether the number is 
prime number or not using for loop.
19. Write a C program to find sum of all prime numbers between 1 to n using for 
loop.
20. Write a C program to input a number from user and find Prime factors of the 
given number using loop.
21. Write a C program to input a number from user and check whether given 
number is Armstrong number or not.
22. Write a C program to print all Armstrong numbers between 1 to n.
23. Write a C program to input a number and check whether the number is 
Perfect number or not. 
24. Write a C program to find all Perfect numbers between 1 to n.
25. Write a C program to print Fibonacci series up to n terms using loop.
26. Write a program in C to display a pattern like a right angle triangle using an 
asterisk. 
* 
** 
*** 
**** 
***** 
27. Write a C program to display a pattern like a right angle triangle with a 
number.
1 
12 
123 
1234 
12345 
28. Write a program in C to make such a pattern like a right angle triangle with a 
number which will repeat a number in a row.
1 
22 
333 
4444 
55555
29. Write a program in C to make such a pattern like a right angle triangle with 
the number increased by 1.
1 
2 3 
4 5 6 
7 8 9 10 
30. Write a C program to make such a pattern as a pyramid with an asterisk.
 * 
 * * 
 * * * 
* * * *



















_________________________________________________________________________

1. #include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
Output
Enter a number: 10
1 2 3 4 5 6 7 8 9 10

_________________________________________________________________________


2. #include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
Output
Enter a number: 8
8 7 6 5 4 3 2 1

_________________________________________________________________________

3. #include <stdio.h>

int main() {
    
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    return 0;
}
Output 
a b c d e f g h i j k l m n o p q r s t u v w x y z


_________________________________________________________________________


4. #include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
Output
Enter a number: 12
2 4 6 8 10 12


_________________________________________________________________________

5. #include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}

Output
Enter a number: 5
Sum of natural numbers from 1 to 5 is 15.

_________________________________________________________________________

6. #include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}
Output 
Enter a number: 7
Sum of odd numbers from 1 to 7 is 16.

_________________________________________________________________________

7. #include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
Output 
Enter a number: 5
Multiplication table of 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

_________________________________________________________________________

8. #include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    printf("Number of digits in the given integer: %d\n", count);

    return 0;
}
Output 
Enter an integer: 12345
Number of digits in the given integer: 5

_________________________________________________________________________



9. #include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    printf("First digit of the given integer: %d\n", firstDigit);
    printf("Last digit of the given integer: %d\n", lastDigit);

    return 0;
}
Output
Enter an integer: 98971
First digit of the given integer: 9
Last digit of the given integer: 1

_________________________________________________________________________

10. #include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    printf("Sum of first and last digit is %d",firstDigit+lastDigit);
    return 0;
}
Output
Enter an integer: 98971
Sum of first and last digit is 10

_________________________________________________________________________

14. #include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}
Output 
Enter the base: 2
Enter the exponent: 5
2 raised to the power of 5 is: 32

_________________________________________________________________________

15. #include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", number, factorial);
    }

    return 0;
}
Output 
Enter an integer: 5
Factorial of 5 is: 120

_________________________________________________________________________

17. #include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
Output 
Enter an integer: 12
Factors of 12 are: 1 2 3 4 6 12

_________________________________________________________________________

18. #include<stdio.h>

int main()
{
    int n,i, count=0;
    printf("enter any number :");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
       if(n%i==0)
       {
          count++;
       }
    }
    if(count==2)
       printf("Prime number");
       else
       printf("Not a Prime number");
    return 0;
}
Output
enter any number :13
Prime number 

_________________________________________________________________________

26. #include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter number of rows :");
    scanf("%d",&n);
    
    for( i=1; i<=n; i++)
    {
      for( j=1; j<=i; j++)
      {
         printf("*"); 
      }
      
      printf("\n");
    }

}
Output
Enter number of rows :5
*
**
***
****
*****

_________________________________________________________________________

27. #include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter number of rows :");
    scanf("%d",&n);
    
    for( i=1; i<=n; i++)
    {
      for( j=1; j<=i; j++)
      {
         printf("%d",j); 
      }
      
      printf("\n");
    }

}
Output
Enter number of rows :5
1
12
123
1234
12345

_________________________________________________________________________

28. #include<stdio.h>
main()
{
    int i,j,n;
    
    printf("Enter number of rows :");
    scanf("%d",&n);
    
    for( i=1; i<=n; i++)
    {
      for( j=1; j<=i; j++)
      {
         printf("%d",i); 
      }
      
      printf("\n");
    }

}
Output
Enter number of rows :5
1
22
333
4444
55555

_________________________________________________________________________


29. #include<stdio.h>
main()
{
    int i,j,n,a=1;
    
    printf("Enter number of rows :");
    scanf("%d",&n);
    
    for( i=1; i<=n; i++)
    {
      for( j=1; j<=i; j++)
      {
         printf("%d ",a);
         a++; 
      }
      
      printf("\n");
    }

}
Output
Enter number of rows :4
1
2 3
4 5 6
7 8 9 10

_________________________________________________________________________

30. #include<stdio.h>

int main()
{
    int i,j,k,n;
     
     printf("Enter The number of Rows : ");
          scanf("%d",&n);
      for(i=1;i<=n;i++){
      for(k=n;k>=i;k--)
      printf(" ");
        for(j=1;j<=i;j++){
        printf("* ");
        }
       printf("\n"); 
      }    
    return 0;
}





Output
Enter The number of Rows : 4
    *
   * *
  * * *
 * * * *

_________________________________________________________________________
