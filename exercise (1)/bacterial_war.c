#include<stdio.h>
#include<math.h>

int main()
{
    int bad,good,n;
    int hours=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&bad,&good);
        while(bad > 0)
        {
            bad = bad - good;
            {
                if(bad <= 0)
                {
                    break;
                }
            }
            bad = bad * 2;
            good = (int)floor(1.05 * good);
            if(bad > 1000000)
            {
                bad=1000000;
            }
            hours++;
        }
        printf("%d\n",hours);
        hours=1;
    }

}