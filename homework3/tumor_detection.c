#include <stdio.h>

int main() 
{
    int n,area = 0,circumference = 0;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]<=50){area++;}
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]<=50)
            {
                if(j==0 || j==n-1 ||i==0 || i==n-1){circumference++;}
                else if(matrix[i-1][j]>50 || matrix[i+1][j]>50 || matrix[i][j-1]>50 || matrix[i][j+1]>50){circumference++;}
            }
        }
    }
    printf("%d %d\n",area,circumference);
}