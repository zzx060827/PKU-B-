#include <stdio.h>


#define max 100

int rule_1and3(int i,int j,int old[max][max],int m,int n)
{
    int placey[8]={-1,-1,-1,0,0,1,1,1};
    int placex[8]={-1,0,1,-1,1,-1,0,1};
    int count=0;
    for(int k=0;k<8;k++)
    {
        int x=i+placex[k];
        int y=j+placey[k];
        if(x>=0&&x<m&&y>=0&&y<n)
        {
            if(old[x][y]==1)
            {
                count++;
            }
        }
    }
    if(count<2||count>3){return 1;}
    else{return 0;}
}
int rule_2(int i,int j,int old[max][max],int m,int n)
{
    int placey[8]={-1,-1,-1,0,0,1,1,1};
    int placex[8]={-1,0,1,-1,1,-1,0,1};
    int count=0;
    for(int k=0;k<8;k++)
    {
        int x=i+placex[k];
        int y=j+placey[k];
        if(x>=0&&x<m&&y>=0&&y<n)
        {
            if(old[x][y]==1)
            {
                count++;
            }
        }
    }
    if(count==2||count==3){return 1;}
    else{return 0;}
}
int rule_4(int i,int j,int old[max][max],int m,int n)
{
    int placey[8]={-1,-1,-1,0,0,1,1,1};
    int placex[8]={-1,0,1,-1,1,-1,0,1};
    int count=0;
    for(int k=0;k<8;k++)
    {
        int x=i+placex[k];
        int y=j+placey[k];
        if(x>=0&&x<m&&y>=0&&y<n)
        {
            if(old[x][y]==1)
            {
                count++;
            }
        }
    }
    if(count==3){return 1;}
    else{return 0;}
}

int main() 
{
    int m,n;scanf("%d %d",&m,&n);
    if (m > max || n > max) {
        return 1;
    }
    int old[max][max]={0};int new[max][max]={0};
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            {scanf("%d",&old[i][j]);}
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(old[i][j]==1&&rule_1and3(i,j,old,m,n)){new[i][j]=0;}
            if(old[i][j]==1&&rule_2(i,j,old,m,n)){new[i][j]=1;}
            if(old[i][j]==0&&rule_4(i,j,old,m,n)){new[i][j]=1;}
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!j) printf("%d",new[i][j]);
            else printf(" %d",new[i][j]);

        }
        printf("\n");
    }

}