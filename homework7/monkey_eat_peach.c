#include <stdio.h>

int main() 
{
    int n;scanf("%d" ,&n);
    for(int i=0;i<n;i++)
    {
        int m,e,d;
        scanf("%d %d %d",&m,&e,&d);
        if(m<=e*d){printf("0\n");continue;}
        printf("%d\n",m-e*d);
    }    
}