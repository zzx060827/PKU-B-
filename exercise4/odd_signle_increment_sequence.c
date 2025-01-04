#include <stdio.h>

void bubble_sort(int arr[], int n); 
int main() 
{
    int n,count=0;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    bubble_sort(arr, n);
    
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0&&count==0)
        {printf("%d",arr[i]);count++;}
        if(arr[i]%2!=0&&count!=0)
        {printf(",%d",arr[i]);count++;}
        
        }
}

void bubble_sort(int arr[], int n) 
{
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1;i++)
    {if(arr[i]>arr[i+1]){int temp=arr[i];arr[i]=arr[i+1];arr[i+1]=temp;}}}
}