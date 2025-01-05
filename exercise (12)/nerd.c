#include <stdio.h>
#include <math.h>

int main() 
{
    int n1;scanf("%d",&n1);
    int class_id[1000010]={0};
    for(int i=0;i<n1;i++)
    {
        int t1,t2;
        scanf("%d %d",&t1,&t2);
        class_id[t1]=t2;
    }
    int n;scanf("%d",&n);
    int stu_id[n];double credit[n];
    for(int i=0;i<n;i++)
    {
        int x;int score;int sum=0;
        scanf("%d %d",&x,&stu_id[i]);
        for(int j=0;j<x;j++)
        {
            int id;
            scanf("%d %d",&id,&score);
            if(score<60)credit[i]=0;
            else 
            {credit[i]+=(4-(3*pow((10-score/10.0),2.5)/32.0))*class_id[id];}
            sum+=class_id[id];
        }
        credit[i]/=sum;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(stu_id[i]>stu_id[j])
            {
                double temp=credit[i];
                credit[i]=credit[j];
                credit[j]=temp;
                int temp2=stu_id[i];
                stu_id[i]=stu_id[j];
                stu_id[j]=temp2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(credit[i]<credit[j])
            {
                double temp=credit[i];
                credit[i]=credit[j];
                credit[j]=temp;
                int temp2=stu_id[i];
                stu_id[i]=stu_id[j];
                stu_id[j]=temp2;
            }
        }
    }
    int r=1;
    for(int i=0;i<n-1;i++)
    {
        if(credit[i]==credit[i+1])r++;
        else break;
    }
    for(int i=0;i<r;i++)
    {
        if(!i)printf("%d",stu_id[i]);
        else printf(" %d",stu_id[i]);
    }
}