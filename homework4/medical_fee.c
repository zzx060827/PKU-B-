#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    double fee[n];
    double sum=0;
    for(int i=0; i<n; i++)
    {
        fee[i]=0;
        scanf("%lf", &fee[i]);
        if(fee[i] < 100){sum+=0;}
        else if(fee[i] >= 100 && fee[i] < 200){sum+=fee[i]*0.1;}
        
        else if(fee[i] >= 200 && fee[i] < 500){sum+=fee[i]*0.3;}
        
        else if(fee[i] >= 400){sum+=fee[i]*0.5;}

    }
    printf("%.2f", sum);
}