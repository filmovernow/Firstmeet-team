#include<stdio.h>
main()
{
    int i,j,num;
        printf("");
        scanf("%d",&num);
        for(i=1;i<=num;i++){
               for(j=1;j<=i;j++){
                        printf("*");
                }
                printf("\n");
        }
}