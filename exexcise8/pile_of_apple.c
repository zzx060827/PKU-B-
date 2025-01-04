#include <stdio.h>

int pile_apple(int m,int n)
{
    if(n==1||m==1){return 1;}
    else if(m==0){return 1;}
    else if(m>=n){return pile_apple(m,n-1)+pile_apple(m-n,n);}
    else if(m<n){return pile_apple(m,m);}
}

int main() 
{
    int k;scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        int m,n;scanf("%d %d",&m,&n);
        printf("%d\n",pile_apple(m,n));
    }

}