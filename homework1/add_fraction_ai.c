#include <stdio.h>

// 定义一个结构体来表示分数
typedef struct 
{
    int numerator; // 分子
    int denominator; // 分母
} Fraction;

// 函数声明，用于计算两个数的最大公约数
int gcd(int a, int b);

// 函数声明，用于计算两个数的最小公倍数
int lcm(int a, int b);

int main() 
{
    int final_numerator, final_denominator; // 最终的分数的分子和分母
    int n; // 要输入的分数数量
    scanf("%d", &n);

    Fraction fractions[n]; // 创建一个数组来存储分数

    // 循环输入每个分数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d/%d", &fractions[i].numerator, &fractions[i].denominator);
    }

    // 初始化最终的分子和分母
    final_numerator = fractions[0].numerator;
    final_denominator = fractions[0].denominator;

    // 计算分数的和
    for (int i = 1; i < n; i++) 
    {
        int common_denominator = lcm(final_denominator, fractions[i].denominator);
        int numerator1 = common_denominator / final_denominator * final_numerator;
        int numerator2 = common_denominator / fractions[i].denominator * fractions[i].numerator;
        final_numerator = numerator1 + numerator2;
        final_denominator = common_denominator;

        // 约简分数
        int gcd_value = gcd(final_numerator, final_denominator);
        final_numerator /= gcd_value;
        final_denominator /= gcd_value;
    }
    if(final_numerator == final_denominator)
    {
        printf("1\n");
    }
    else
    {
         printf("%d/%d\n", final_numerator, final_denominator);
    }


    
    return 0;
}

// 实现计算最大公约数的函数
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// 实现计算最小公倍数的函数
int lcm(int a, int b) 
{
    return (a / gcd(a, b)) * b;
}