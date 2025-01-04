#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int win[100001]= {0};
    int lose[100001]= {0};
    for(int i=0;i<100001;i++){lose[i]=0;}
    for(int i=0;i<n;i++)
    {
        int w,l;
        scanf("%d %d", &w, &l);
        win[w]++;
        lose[l]++;
    }
    int max=1;
    for(int i=0;i<100001;i++)
    {
        if(win[i]>0 && lose[i]==0)
        {
            if(max){printf("%d", i);max=0;}
            else{printf(",%d", i);}
        }
    }
    

    
}