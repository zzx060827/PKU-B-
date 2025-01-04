#include <stdio.h>

// 定义一个结构体来表示分数
typedef struct 
{
    int numerator; // 分子
    int denominator; // 分母
} Fraction;

int main() 
{
    int final_numerator, final_denominator; // 最终的分数的分子和分母
    int n; // 要输入的分数数量
    scanf("%d", &n);

    Fraction fractions[n]; // 创建一个数组来存储分数
        int final_num[n];

    // 循环输入每个分数
    for (int i = 0; i < n; i++) 
    {
        scanf("%d/%d", &fractions[i].numerator, &fractions[i].denominator);
    }

    // 计算并输出每个分数的和
    final_numerator = fractions[0].numerator;
    final_denominator = fractions[0].denominator;
    for (int i = 0; i < n; i++)
     {
        int final_num[i] = int *final_num = malloc(n * sizeof(int)); // 分配动态内存
     }
for (int i = 0; i < n; i++) {
    final_num[i] = fractions[i].numerator; // 正确
}

// 记得在使用完后释放内存
free(final_num);
fractions[i].numerator;;
    }
    
    for (int i = 0; i < n-1; i++) 
    {
        for(int j = 0; j < n-1 && i!= j; j++)
        {
            final_num[i] = final_num[i] * fractions[j].denominator;
    }
    for(int i = 0; i < n; i++)
    {
        final_numerator = final_num[i];
    }
    printf("%d/%d", final_numerator, final_denominator);
    
}
