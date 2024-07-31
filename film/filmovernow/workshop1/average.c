#include <stdio.h>
int main() {
    int num1,num2,num3,sum;
    float average;
    scanf("%d %d %d", &num1,&num2,&num3);
    sum=num1+num2+num3;
    average=sum/3;
    printf("%.2f",average);
}