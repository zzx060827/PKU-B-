#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    double arr[n];
    double E, D = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf", &arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        E += arr[i];
    }
    E /= n;
 
    for(int i=0;i<n;i++)
    {
        D += (arr[i] - E)*(arr[i] - E);
    }
    D /= n;
    
    printf("%.5f %.5f",E, D);
}