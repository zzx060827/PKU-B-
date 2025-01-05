#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int points[101][101]={0};
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        points[x][y]=1;
    }
    int count=0;
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            if(points[i][j]==1)
            {
                int judge=0;
                for(int k=i;k<101;k++){for(int l=j;l<101;l++){if((k!=i || l!=j) && points[k][l]==1){judge=1;break;}}}
                if(judge==0 && count==0)
                {
                    printf("(%d,%d)",i,j);
                    count++;
                }
                else if(judge==0 && count!=0)
                {
                    printf(",(%d,%d)",i,j);
                }    
            }
        }
    }
}