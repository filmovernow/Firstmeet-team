#include <stdio.h>
int main()
{
   int arr[3][3],i,j,max;
    for ( i = 0; i < 3; i++)
   {
    for ( j = 0; j < 3; j++)
    {
        printf("matrix [%d][%d]: ",i,j);
       scanf("%d",&arr[i][j]);
          
    }

   }
   max=arr[0][0];
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
                // arr[i][j]=arr[i][j+1];
                // arr[i][j+1]=max;
            }
            
        }
        
    }

    printf("The maximum value in the matrix is:%d",max);
    
   
    return 0;
}
