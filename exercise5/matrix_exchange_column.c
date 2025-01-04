#include <stdio.h>

int main() 
{
    int a[5][5]={0};int n,m,temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&n,&m);
    if(n<0 || n>4 || m<0 || m>4){printf("error");return 0;}
    for(int i=0;i<5;i++)
    {
        temp=a[n][i];
        a[n][i]=a[m][i];
        a[m][i]=temp;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==4) printf("%d",a[i][j]);
            else printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 1;
    
}