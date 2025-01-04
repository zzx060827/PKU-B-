#include <stdio.h>

int main() 
{
    int n,money,count=0;
    scanf("%d %d",&n,&money);
    int price[250]={0};int priority[250]={0};
    for(int i=0;i<n;i++)
    {
        int t1,t2;scanf("%d %d",&t1,&t2);
        price[t2]=t1;
        priority[t2]++;
    }
    for(int i=250-1;i>=0;i++)
    {
        if(priority[i]>0 && money>=price[i])
        {
            count++;
            money-=price[i];
        }
        if(money<price[i]) break;
    }
    printf("%d",count);
}