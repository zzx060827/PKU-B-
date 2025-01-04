#include <stdio.h>
#include <math.h>

int main()
{
    long n,num,interval,digit;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int judge=0;
        scanf("%ld %ld",&num,&interval);
        if(num<0){num=-num;judge=1;}
        if(num==0){printf("0\n");continue;}
        digit=log10(num)+1;
        int d[digit];
        for(int k=0;k<digit;k++){d[k]=0;}
        for(int j=digit-1;j>=0;j--)
        {
            d[j]=num%10;
            num/=10;
        }
        int count=0;
        if(judge==1){printf("-");}
        for(int j=0;j<digit;j++)
        {
            printf("%d",d[j]);
            count++;
            if((count==digit%interval) &&count!=digit ||(count!=digit && (count-(digit%interval))%interval==0)){printf(",");}
        }
        printf("\n");

    }
}