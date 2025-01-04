#include <stdio.h>

unsigned long long factorial(int n);

int main() 
{
    int n;
    double e = 1.0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        e += (1.0/factorial(i));
    }
    printf("%.6lf", e);
}

unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for(int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}