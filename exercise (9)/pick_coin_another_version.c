#include <stdio.h>
#include <math.h>

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coin[i]);
    }

    if (k == n)
    {
        int s = 0;
        for (int i = 0; i < n; i++) { s += coin[i]; }
        printf("%d", s);
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += coin[i];
    }
    int max_sum = sum;

    for (int i = k-1; i >= 0; i--)
    {
        sum += coin[n - k + i];sum -= coin[i];
        if (sum > max_sum)
        {
            max_sum = sum;
        }
    }

    printf("%d", max_sum);
    return 0;
}