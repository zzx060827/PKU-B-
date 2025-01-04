#include <stdio.h>

int main() 
{
    int n;scanf("%d", &n);
    int count=0;
    int tian[n];int qi[n];
    for(int i=0;i<n;i++)scanf("%qi[i]", &qi[i]); 
    for(int i=0;i<n;i++)scanf("%tian[i]", &tian[i]);
    for(int i=(n-1)/2,j=0;i<n;i++,j++)
    {
        if(tian[j]>qi[i])count++;
    }
    if(count>(n/2))printf("yes\n");
    else printf("no\n");
}