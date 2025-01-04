#include <stdio.h>

int main() 
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(n*a<=b){printf("0");return 0;}
    if(b%a==0){printf("%d",n-b/a);return 0;}
    else{printf("%d",(n-b/a)-1);return 0;}
}