#include <stdio.h>

int main() 
{
    int m,n;scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                int length=1,width=1;
                int ti=i+1,tj=j+1;
                while(arr[i][tj]==0 && tj<n){tj++;length++;}
                if(tj==n)tj--;
                for(int y=i+1;y<m;y++)
                {
                    int judge=1;
                    for(int x=j;x<=tj;x++)
                    {
                        if(arr[y][x]!=0){judge=0;break;}
                    }
                    if(judge)width++;
                    else break;
                }
                if(length*width>max)max=length*width;
                
            }
        }
    }
    printf("%d",max);
}