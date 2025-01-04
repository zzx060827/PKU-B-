#include<stdio.h>

long long get_stone(long long s1,long long s2,long long winner)
{
    if(s1==s2){return 1;}
    long long max=s1>s2?s1:s2;
    long long min=s1<s2?s1:s2;
    if(max<2*min){return get_stone(max-min,min,(winner+1)%2);}
    else return winner;
}

int main()
{
    while(1)
    {
        long long s1,s2,winner=1;
        scanf("%lld %lld",&s1,&s2);
        if(s1==0&&s2==0){return 0;}
        if(get_stone(s1,s2,winner)){printf("win\n");}
        else if(!get_stone(s1,s2,winner)){printf("lose\n");}
    }
}