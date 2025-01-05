#include <stdio.h>

int main() 
{
    int m,n;int count=0;
    scanf("%d %d",&m,&n);
    int colony[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&colony[i][j]);
            if(colony[i][j]==1)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}