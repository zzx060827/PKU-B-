#include <stdio.h>

struct interval {
    int left;
    int right;
}intrval[10002];

int main()
{
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&intrval[i].left,&intrval[i].right);
    }
}