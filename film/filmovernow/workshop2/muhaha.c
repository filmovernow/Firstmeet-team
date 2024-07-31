#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int i = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        sum += n;
        if (n <= 0) {
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}