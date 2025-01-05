#include <stdio.h>
#include <stdlib.h>

struct guest{
    int status;
    int id;
    int sequence;
};

void sort(struct guest p[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if( p[j].id>p[j+1].id)
            {
                struct guest temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(p[j].status>p[j+1].status)
            {
                struct guest temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    

}
int main()
{
    int n;scanf("%d",&n);
    struct guest p[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d,%d",&p[i].status,&p[i].id);
        p[i].sequence=i+1;
    }
    sort(p,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",p[i].sequence);
    }

}