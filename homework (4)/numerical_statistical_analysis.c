#include <stdio.h>

int main() 
{
    int n,count=0,max=0,min=10000,sum=0,judgemax=0,judgemin=0,coun=0;
    scanf("%d", &n);
    int arr[n],pom[n];//plus or minus
    for(int i=0; i<n; i++) 
    {
        int temp=0;
        scanf("%d", &temp);sum+=temp;
        if(temp>0){pom[i]=1;arr[i]=temp;coun++;}
        else if(temp<0){pom[i]=-1;arr[i]=-temp;count++;}
        else{pom[i]=0;arr[i]=0;}
    }
    for(int i=0; i<n; i++) 
    {
        if(arr[i]>max) {max=arr[i];if(pom[i]==1)judgemax=1;else judgemax=-1;}
        if(arr[i]<min) {min=arr[i];if(pom[i]==1)judgemin=1;else judgemin=-1;}
    }
    max*=judgemax;min*=judgemin;
    printf("%d\n%d\n%d\n%d\n%d\n",coun,count,sum,max,min);
    
}