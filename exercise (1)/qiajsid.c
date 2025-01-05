#include <stdio.h>

// 函数：计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int q = 0, p = 1; // 初始分数设置为0/1
    int q1, p1;
    int n = 0;
    int i;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%d/%d", &q1, &p1);
        
        // 计算分数相加
        if (i == 1) {
            q = q1;
            p = p1;
        } else {  
            // 使用公共分母进行累加
            q = q * p1 + q1 * p; // 分子相加
            p *= p1;             // 分母相乘
        }
    }

    // 求最大公约数以化简分数
    int divisor = gcd(q, p);
    q /= divisor;
    p /= divisor;
    
    printf("%d/%d\n", q, p); // 输出结果，添加换行符以规范输出
    
    return 0;
}
