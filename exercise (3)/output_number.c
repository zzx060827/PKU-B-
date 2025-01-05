#include <stdio.h>

int main() 
{
    int n = 0;
    scanf("%d\n", &n);
    int arr[n],judge[n];
    int count = n;
    for(int i = 0; i < n; i++)
    {
        judge[i] = 0 ;
        scanf("%d", &arr[i]);
        for(int j=0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {judge[i] = 1;
            count--;}
            
        }
        

    }
    for(int i = 0; i < n; i++)
    if(judge[i] == 0 && count != 1)
        {
            printf("%d ", arr[i]);
            count--;
        }
        else if(judge[i] == 0 && count == 1)
        {
            printf("%d", arr[i]);
        }
}