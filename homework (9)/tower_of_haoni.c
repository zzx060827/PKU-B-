#include <stdio.h>

void hanoi(int n,int  start,int  end)
{
    char cstart=start+'A'-1,cend=end+'A'-1;
    if(n==1)
    {
        printf("%c->%c\n",cstart,cend);
    }
    else
    {
        hanoi(n-1,start,6-start-end);
        printf("%c->%c\n",cstart,cend);
        hanoi(n-1,6-start-end,end);
    }
        
}

int main() 
{
    int n;scanf("%d",&n);
    int start=1,end=3;//0 represents a, 1 represents b, 2 represents c
    hanoi(n,start,end);
    
}