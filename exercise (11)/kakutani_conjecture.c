#include<stdio.h>
#include<math.h>

void process(int n)
{
    if(n==1){printf("End");}
    else if(n%2==0)
    {
        n/=2;
        printf("%d/2=%d\n",n*2,n);
        process(n);
    }
    else{
        printf("%d*3+1=%d\n",n,n*3+1);
        n=n*3+1;
        process(n);
    }
}

int main()
{
    int n;scanf("%d",&n);
    process(n);
}