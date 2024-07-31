#include <stdio.h>
int main() 
{
    float weight, tall, x;
    scanf("%f", &weight);
    scanf("%f", &tall);
    x = weight / (tall*tall);
    printf("Your BMI is %.2f\n", x );
    if (x<18.5) 
    {
        printf("You are underweight.");
    }
    else if (x >=18.5 && x<=24.9)
    {
        printf("You are normal weight.");
    }
    else if (x >= 25 && x <=29.9) 
    {
        printf("You are overweight.");
    }
    else
    {
        printf("You are obese.");
    }
}