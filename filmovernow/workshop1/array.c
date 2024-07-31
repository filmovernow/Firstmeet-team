#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    int sum=0;
    for (i = 0; i < 5 ; i++)
    {
        scanf("%d",&arr[i]);
        sum=arr[i]+sum;
    }
    printf("Sum of entered numbers: %d",sum); 
    printf("\n");
    printf("Numbers in array: %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    return 0;
}