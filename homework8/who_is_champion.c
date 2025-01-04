#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int sum[n];
    for(int i=0;i<n;i++)
    {sum[i]=0;}
    for(int i=0;i<n;i++)
    {
        int scores[101]={0};
        for(int j=0;j<5;j++)
        {
            int t;
            scanf("%d",&t);
            scores[t]++;
        }
        
        for(int j=100;j>=0;j--)
        {
            int max=0,coun=0;
            if(scores[j]>0&&coun!=4){while(scores[j]>0){
                if(coun==4)break;
                sum[i]+=j*max;
                scores[j]--;
                max=1;
                coun++;
            }}
        }


    }
    int max=0,c=0;
    for(int j=0;j<n;j++)
    {
        if(sum[j]>max){max=sum[j];c=j;}
    }
    printf("%d %d",c+1,max);
}