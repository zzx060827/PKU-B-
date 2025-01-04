#include <stdio.h>

int main() 
{
    int v1,v2,s;double t;
    scanf("%d %d %lf %d",&v1,&v2,&t,&s);
    if(v2*((s/v1)-t)>=s)printf("YES");
    else printf("NO");
}