#include <stdio.h>

int main() 
{
    double r, area,diameter,perimeter;
    scanf("%lf", &r);
    printf("diameter = %.4lf\n", 2*r);
    printf("perimeter = %.4lf\n", 2*3.14159*r);
    printf("area = %.4lf\n", 3.14159*r*r);
}