#include<stdio.h>
int main() {

    int n, factorial=1;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d",factorial);

    return 0;

}
