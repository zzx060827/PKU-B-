#include <stdio.h>

int main() 
{
    int n,count=0;
    int max=0;
    scanf("%d",&n);
    int patient[n],line[n],time[n];
    for(int i=0;i<n;i++)
    {
        line[i]=0;
        scanf("%d",&patient[i]);
    }
    for(int j=0;j<n;j++)// to find the sequence of time
    {
        for(int i=0;i<n;i++)
    {
        count=0;
        for(int l=0;l<n;l++)
        {
            if(patient[i]>patient[l] && i!=l){count++;}
            if(patient[i]==patient[l] && i>l){count++;}
        }
        if(count == j)
        line[j]=i;
        time[j]=patient[i];
    }
    
    }
    double sum=0.0;
    for(int i=0;i<n;i++)
    {sum+=patient[line[i]]*(n-i-1);}
    printf("%d",line[0]+1);
    for(int i=1;i<n;i++)
    {printf(" %d",line[i]+1);}
    printf("\n");
    printf("%.2f",sum/n);
    

}