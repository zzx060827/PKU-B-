#include <stdio.h>

int main() 
{   
    int rmb;
    int numbers[6] = {0};
    scanf("%d", &rmb);
    numbers[0] = rmb / 100;
    rmb %= 100;
    numbers[1] = rmb / 50;
    rmb %= 50;
    numbers[2] = rmb / 20;
    rmb %= 20;
    numbers[3] = rmb / 10;
    rmb %= 10;
    numbers[4] = rmb / 5;
    rmb %= 5;
    numbers[5] = rmb;
    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", numbers[i]);
    }
}