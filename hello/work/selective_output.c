#include <stdio.h>

int main() 
{
    int n;int nature[100];int minus[100]={0};
    for(int i=0; i<100; i++){nature[i]=-1;}
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
      int t;scanf("%d", &t);
      if(t<0){minus[i]=t;}
      else{nature[i]=t;}
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(nature[i]!=-1 && count==0){printf("%d", nature[i]);count=1;}
      else if(nature[i]!=-1){printf(",%d", nature[i]);}
    }
    for (int i = 0; i < n; i++)
    {
      if(minus[i]!=0){printf(",%d", minus[i]);}
    }
}