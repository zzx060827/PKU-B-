#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=i;j>=0 && i-j>=0 && (i-j)<row  ;j--)
        {
            printf("%d\n", arr[i-j][j]);
        }
    }
    for(int i=col;i<col + row - 1;i++)
    {
        for(int j=col-1;j>=0 && i-j>=0 && (i-j)<row ;j--)
        {
            printf("%d\n", arr[i-j][j]);
        }
    }

    
    

}
