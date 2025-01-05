#include <stdio.h>

int main(void) {
    int n, year, m1, m2;
    scanf("%d", &n);
    int difference = 0;
    int jan = 31, mar = 31, apr = 30, may = 31, jun = 30, jul = 31, aug = 31, sep = 30, oct = 31, nov = 30, dec = 31;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &year, &m1, &m2);

        if (m1 < m2) {
            for (int i = m1; i < m2; i++) 
            {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) 
                {
                    difference += 31;
                } 
                else if (i == 4 || i == 6 || i == 9 || i == 11) 
                {
                    difference += 30;
                } 
                else 
                {
                    if (year % 4 == 0) 
                    {
                        difference += 29;
                    } 
                    else 
                    {
                        difference += 28;
                    }
                }
            }
            if (difference % 7 == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            for (int i = m2; i < m1; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                    difference += 31;
                } else if (i == 4 || i == 6 || i == 9 || i == 11) {
                    difference += 30;
                } else {
                    if (year % 4 == 0) {
                        difference += 29;
                    } else {
                        difference += 28;
                    }
                }
            }
            if (difference % 7 == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        difference = 0; // 重置 difference 为 0，以便计算下一个数据
    }
    return 0;
}