#include <stdio.h>
int main()
{
    float a, b, c, d, n, y, sumr, sumt, sump;

    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("");
    printf("enter your choice: ");
    scanf("%f", &n);

    if (n == 1)
    {
        printf("Enter the width:");
        scanf("%f", &a);
        printf("Enter the height:");
        scanf("%f", &b);
        sumr = a * b;
        if (sumr < 0)
            printf("The area of the rectangle is: Error");
        else
        {
            printf("The area of the rectangle is %.2f ", sumr);
        }
    }
    else if (n == 2)
    {
        printf("Enter the base:");
        scanf("%f", &c);
        printf("Enter the height:");
        scanf("%f", &d);
        sumt = (c * d) / 2;
        if (sumt < 0)
            printf("The area of the triangle is: Error");
        else
        {
            printf("The area of the triangle is %.2f ", sumt);
        }
    }
    else if (n == 3)
    {
        printf("Enter the radius:");
        scanf("%f", &y);
        sump = 3.14 * y * y;
    if (sump < 0)
        printf("The area of the circle is: Error");
    else
    {
        printf("The area of the circle is %.2f ", sump);
    }
    }
    else
    {
        printf("Invalid choice");
    }
}
