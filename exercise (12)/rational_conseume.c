#include <stdio.h>
#include <stdlib.h>

int found = 0;

void buy(int n, int price[], int money, int list[], int sequence, int count) 
{
    if (money == 0) 
    {
        found = 1;
        for (int i = 0; i < count; i++) {
            if (i == 0) printf("%d", list[i]);
            else printf(" %d", list[i]);
        }
        printf("\n");
        return;
    }
    if (money < 0) return;

    for (int j = sequence; j < n; j++) {
        list[count] = price[j];
        buy(n, price, money - price[j], list, j, count + 1);
    }
}

int main() {
    int n, money;
    scanf("%d %d", &n, &money);
    int price[10]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }
    int list[300];
    buy(n, price, money, list, 0, 0);
    
    if (!found) {
        printf("NO\n");
    }
    
    return 0;
}
