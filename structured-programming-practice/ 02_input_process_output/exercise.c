#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,sum,product,remainder,quotient,difference;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);

    sum = x+y;
    product = x*y;
    difference = fabs(x-y);
    quotient= x/y;
    remainder = x%y;

    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    printf("Difference: %d\n",difference);
    printf("Quotient: %d\n",quotient);
    printf("Remainder: %d\n",remainder);


    return 0;
}
