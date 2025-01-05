#include <stdio.h>

int main() 
{
    while(1)
    {
        int n, m, count = 1, coun = 0;
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0) break;
        int a[n + 1];
        for(int i = 0; i < n + 1; i++) a[i] = 1;
        
         for(int i = 1; i <= n; i++) a[i] = 1; // 初始化数组a，范围是1到n
        
        int count = 1, coun = 0, i = 1; // i从1开始，因为0不使用
        while(coun < n - 1) // 需要移除n-1个元素
        {
            while(a[i] == 0) // 跳过已经被移除的元素
            {
                i++;
                if(i > n) i = 1; // 循环回到数组的开始
            }
            if(count % m == 0) // 每m个元素移除一个
            {
                a[i] = 0; // 标记为已移除
                coun++; // 增加已移除的计数
            }
            count++; // 增加计数
            i++; // 移动到下一个元素
            if(i > n) i = 1; // 如果到达数组末尾，循环回到开始
        }
        for(int i = 1; i < n; i++)
        {
            if(a[i] == 1)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}