#include <stdio.h>

int main()
{
    int initial,affect,during,date,end,populations;
    scanf("%d %d %d",&initial,&affect,&during);
    scanf("%d",&end);
    int death[end+1];
    death[1]=initial;
    populations=initial;
    during--;
    for(int today=2;today<=end;today++)
    {
        if(today-during>=1){populations-=death[today-during];}// death
        death[today]=populations*affect;// pre_death
        populations+=populations*affect;// affect
    }
    printf("%d",populations);
    return 0;
    
}

