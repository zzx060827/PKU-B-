#include <stdio.h>

int main() 
{
    int k,r;
    scanf("%d,%d",&k,&r);
    int josephus[100000]={0};
    josephus[1]=1;if(r==1)printf("1");
    for(int i=2;i<100000;i++)
    {
        if(((josephus[i-1]+k)%i)!=0)
        josephus[i]=((josephus[i-1]+k)%i);
        else
        josephus[i]=i;
        if(josephus[i]==r)
        {
            printf("%d",i);return 0;
        }
    }
}

