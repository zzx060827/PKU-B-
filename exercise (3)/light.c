#include <stdio.h>

int main() 
{   
    
    int n;
    scanf("%d", &n);
    int light[n+1];
    for(int i=0; i<n+1; i++)
    {
        light[i] = 0;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            if(j%(i+1) == 0)
            {
                light[j]++;
            }
        }
    }
    for(int i=1; i<n; i++)
    {
        if(light[i]%2 != 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
