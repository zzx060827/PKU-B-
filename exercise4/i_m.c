#include <stdio.h>

int main() 
{
    int interval[10000]={0};
    int n;int judge=0,rcd_left=0,rcd_right=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int left,right;
        scanf("%d %d", &left, &right);
        for(int j=left*2;j<=right*2;j++)
        {
            interval[j]=1;
        }
    }
    for(int i=0;i<10000;i++)
    {if(interval[i]==1){rcd_left=i;break;}}
    for(int i=9999;i>=0;i--)
    {if(interval[i]==1){rcd_right=i;break;}}
    for(int i=rcd_left;i<=rcd_right;i++){if(interval[i]==0){judge++;}}
    if(judge==1){printf("no");}
    else{printf("%d %d", rcd_left/2, rcd_right/2);}
}