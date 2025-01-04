#include <stdio.h>

void bubbling_sort(int arr[], int n); 

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbling_sort(arr, n);
    int k;scanf("%d", &k);
    for(int i=0; i<k; i++)
    {
        printf("%d\n", arr[i]);
    }

}

void bubbling_sort(int arr[], int n) 
{
    int i,j,t;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}