#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j==0)printf("%d", c[i][j]);
            else printf(" %d", c[i][j]);
        }
        printf("\n");
    }
}