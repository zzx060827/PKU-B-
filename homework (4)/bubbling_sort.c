#include <stdio.h>

void bubble_sort(int arr[], int n); 
int main() 
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    bubble_sort(arr, n);
    for(int i=0;i<n;i++){printf("%d ",arr[i]);}
}

void bubble_sort(int arr[], int n) 
{
    for(int j=0;j<n-1;j++){
    for(int i=0;i<n-1;i++)
    {if(arr[i]>arr[i+1]){int temp=arr[i];arr[i]=arr[i+1];arr[i+1]=temp;}}}
}