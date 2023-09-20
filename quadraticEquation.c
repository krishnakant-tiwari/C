#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);

    d=(b*b)-(4*a*c);
   
    if(d==0)
    {
        printf("roots of the equation are real and same \n");
        x1 = -(b + sqrt(d))/(2*a);
        printf("%f\n",x1);
        x2 = -(b - sqrt(d))/(2*a);
       
    }

    else if(d>0)
    {
        printf("roots of the equation are real and different \n");
        x1 = -(b + sqrt(d))/(2*a);
        printf("%f\n",x1);
        x2 = -(b - sqrt(d))/(2*a);
        printf("%f\n",x2);
    }
    
   else
   {
        printf("roots are imeginary");
    }
    return 0;
}
