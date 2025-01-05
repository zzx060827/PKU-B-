#include <stdio.h>

int main() 
{
    int n;
    double c,f;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&f);
        c=(f-32)*5/9;
        printf("%.5lf\n",c);
    }
    return 0;

}