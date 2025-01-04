#include <stdio.h>

int main() 
{
    int a,b;double dead_rate;
    scanf("%d %d",&a,&b);
    dead_rate = ((double)b/a)*100;
    printf("%.3lf%%",dead_rate);
}