#include <stdio.h>
#include <math.h>

int digit;

int isSpecial(int n,int digit) {
    int num[digit];
    for (int i = 0; i < digit; i++) {
        num[digit - 1 - i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < digit; i++) {
        if ((num[i] % 2) == (i % 2)) {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    int t;scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int l,r;scanf("%d %d",&l,&r);
        int count=0;
        for(int j=l;j<=r;j++)
        {
            digit = (int)(log10(j) + 1);
            if(j==0) digit=1;
            if(isSpecial(j,digit)) count++;
        }
        printf("%d\n",count);
    }
}