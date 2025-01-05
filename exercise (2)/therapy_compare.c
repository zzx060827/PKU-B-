#include <stdio.h>

int main() 
{
    int n,cocktail_a,cocktail_b;
    scanf("%d",&n);
    scanf("%d %d",&cocktail_a,&cocktail_b);
    double cocktail_percent = (double)cocktail_b / cocktail_a;
    for(int i=1;i<=n-1;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        double percent = (double) b/a;
        if(percent-cocktail_percent > 0.05)
        {
            printf("better\n");
        }
        else if(percent-cocktail_percent < -0.05)
        {
            printf("worse\n");
        }
        
        else
        {
            printf("same\n");
        }
        

    }
}