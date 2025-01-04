#include <stdio.h>
#include <math.h>

int main() 
{
    double r, h, surface_area;
    scanf("%lf %lf", &r, &h);
    surface_area = 2*3.14159*r*r+2*3.14159*r*h;
    printf("Area = %.3lf", surface_area);
}