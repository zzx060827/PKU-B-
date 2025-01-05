#include <stdio.h>

int main() 
{
    double weight,fee=0.8;
    char exp;
    scanf("%lf %c", &weight, &exp);
    weight--;
    while(weight > 0)
    {
        weight--;
        fee+=0.5;
    }
    if(exp=='y'){fee+=2;}
    printf("%.1f",fee);
}