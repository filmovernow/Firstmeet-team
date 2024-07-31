#include<stdio.h>
int main(){
    int n,a=0,b=1;
    
    printf("%d %d ",a ,b );
    for (int i=1;i<=8;i++)
    {
        n=a+b;
        printf("%d ",n);
        a=b;
        b=n;
    }
}