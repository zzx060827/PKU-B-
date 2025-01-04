#include <stdio.h>

int coun=0;

void put(char chess[10][10],int n,int k,int count,int xstart,int ystart)
{
    printf("count=%d\n",count);
    if(count==k)
    {
        count=0;
        coun++;
        return;
    }
        for(int i=xstart;i<n;i++)
        {
            for(int j=ystart;j<n;j++)
            {
                if(chess[i][j]=='#')
                {
                    for(int x=0;x<n;x++)
                    {
                        chess[i][x]='.';
                        chess[x][j]='.';
                        chess[i][j]='c';
                    }
                    if(j==n-1){j=-1;i++;}
                    for(int q=0;q<n;q++)
                    {
                        for(int w=0;w<n;w++)
                        {
                            printf("%c",chess[q][w]);
                        }
                        printf("\n");
                    }
                    count++;
                    put(chess,n,k,count,i,j+1);
                }
                if(i==n-1&&j==n-1&&count<k)
                {
                    return;
                }
            }
        }
}

int main() 
{
    while(1)
    {
        int n,k;scanf("%d%d",&n,&k);getchar();
        if(n==-1&&k==-1)return 0;
        char chess[10][10]={0};char temp[10][10]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%c",&chess[i][j]);
            }
            getchar();
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(chess[i][j]=='#')
                {
                    for(int x=0;x<n;x++)
                    {
                        for(int y=0;y<n;y++)
                        {
                            temp[x][y]=chess[x][y];
                        }
                    }
                    for(int x=0;x<n;x++)
                    {
                        temp[i][x]='.';
                        temp[x][j]='.';
                        temp[i][j]='c';
                    }
                    if(j==n-1){j=-1;i++;}
                    put(temp,n,k,1,i,j+1);
                }
            }
        }
        printf("%d\n",coun);
        coun=0;
    }
}