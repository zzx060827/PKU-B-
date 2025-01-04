#include <stdio.h>

void infect(int n, char str[n][n],int x,int y);


int main() 
{
    int n,day;
    scanf("%d", &n);getchar();
    char str[n][n];int new_infected[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%c", &str[i][j]);
            new_infected[i][j]=1;
            if(str[i][j]=='@'){new_infected[i][j]=0;}
        }
        getchar();
    }
    scanf("%d", &day);day--;
    for(int k=0; k<day; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<n; j++)
            {
                if(str[i][j]=='@'&&new_infected[i][j]==0){infect(n,str,i,j);}
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<n; j++)
            {
                if(str[i][j]=='@'){new_infected[i][j]=0;}
            }
        }
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i][j]=='@'){count++;}
        }
        
    }
    
    printf("%d", count);
    
}

void infect(int n, char str[n][n],int x,int y)
{
    int tx,ty;
    tx=x+1;ty=y;
    if(tx>=0 && tx<n && ty>=0 && ty<n && str[tx][ty]=='.')
    {
        str[tx][ty]='@';
    }
    tx=x-1;ty=y;
    if(tx>=0 && tx<n && ty>=0 && ty<n && str[tx][ty]=='.')
    {
        str[tx][ty]='@';
    }
    tx=x;ty=y+1;
    if(tx>=0 && tx<n && ty>=0 && ty<n && str[tx][ty]=='.')
    {
        str[tx][ty]='@';
    }
    tx=x;ty=y-1;
    if(tx>=0 && tx<n && ty>=0 && ty<n && str[tx][ty]=='.')
    {
        str[tx][ty]='@';
    }
}