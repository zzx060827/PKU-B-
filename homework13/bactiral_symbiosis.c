#include <stdio.h>

void bubbling_sort(int *arr, int n) 
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() 
{
    int n;scanf("%d",&n);
    int bacteria[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bacteria[i]);
    }
    bubbling_sort(bacteria,n);
    int mark=n;
    for(int i=1;i<n;i++)
    {
        if(bacteria[0]>=2*bacteria[i])
        {mark=i;break;}
    }
    printf("%d",mark);
}