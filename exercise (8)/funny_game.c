#include <stdio.h>

int main() 
{
    int arr[102]={0};int a_odd[10]={0};int a_even[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(int i=0;i<10;i++)
    {
        int t;
        scanf("%d",&t);
        arr[t]++;
    }
    int coun=0;
    for(int i=0;i<=100;i+=2)
    {
        while(arr[i]>0)
        {a_even[coun]=i;coun++;arr[i]--;}
    }
    coun=0;
    for(int i=101;i>0;i-=2)
    {
        while(arr[i]>0)
        {a_odd[coun]=i;coun++;arr[i]--;}
    }
    int judge=0;
    for(int i=0;i<10;i++)
    {
        if(a_odd[i]!=0)
        {
            if(judge==0){printf("%d",a_odd[i]);judge++;}
            else printf(" %d",a_odd[i]); 
        }
    }
    for(int i=0;i<10;i++)
    {
        if(a_even[i]!=-1)
        {
            if(judge==0){printf("%d",a_even[i]);judge++;}
            else 
            printf(" %d",a_even[i]);
        }
    }    
}