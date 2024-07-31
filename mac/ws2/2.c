#include <stdio.h>
int main()
{
    int i;
    float r,x,y;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&i);
    if (i==1)
    {
        printf("Enter the width: ");
        scanf("%f",&x);
        printf("Enter the height: ");
        scanf("%f",&y);
        if (x<0 || y<0)
        {
            printf("The area of the rectangle is: Error");
        }
        else
        {
            r=x*y;
            printf("The area of the rectangle is: %.2f",r);
        }
    }
    else if (i==2)
    {
        printf("Enter the base: ");
        scanf("%f",&x);
        printf("Enter the height: ");
        scanf("%f",&y);
        
        if (x<0 || y<0)
        {
            printf("The area of the triangle is: Error");
        }
        else
        {
            r=(x*y)/2;
            printf("The area of the triangle is: %.2f",r);
        }
    }
     else if (i==3)
    {
        printf("Enter the radius: ");
        scanf("%f",&x);
        if (x<0)
        {
            printf("The area of the circle is: Error");
        }
        
        
        else
        {r=3.14*(x*x);
           
            printf("The area of the circle is: %.2f",r);
        }
    
    }
    else
    {
        printf
        ("Invalid choice");
    }
    
    
    return 0;
}