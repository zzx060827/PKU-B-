#include <stdio.h>

int main() 
{
    double f,c;
    scanf("%lf",&f);
    c = (f-32)*5/9;
    printf("%.5lf\n",c);
    return 0;
}