#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int i = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d: ", &n);
        if (n <= 0)
        {
            break;
        }
        sum += n;
        printf("Sum = %d\n", sum);
    }
}