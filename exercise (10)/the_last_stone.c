#include <stdio.h>

int main()
{
    int n;scanf("%d",&n);
    int stones[n];
    for(int i=0;i<n;i++)
        scanf("%d",&stones[i]);
    int a=0,b=1;if(n==1){printf("%d",stones[0]);return 0;}
    while(1){
        if(stones[a]>stones[b]){stones[a]-=stones[b];stones[b]=0;b++;}
        else if((stones[a]<stones[b])){stones[b]-=stones[a];stones[a]=0;a=b;b++;}
        else if(stones[a]==stones[b]){stones[a]=0;stones[b]=0;a=b+1;b+=2;}
        if(b>=n)break;
    }
    for(int i=0;i<n;i++){
        if(stones[i]!=0)
            {printf("%d",stones[i]);
    return 0;}
    }
    printf("0");
}