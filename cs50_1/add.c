#include <stdio.h>

// 函数声明
float average(int length, int array[]);

int main() 
{
    int n;
    scanf("%d", &n); // 读取数组的长度
    int array[n]; // 创建数组
    for(int i = 0; i < n; i++)
    {
        printf("please input element : ");
        scanf("%d", &array[i]); // 读取数组元素
    }
    printf("average of the array is: %f\n", average(n, array)); // 打印平均值
    return 0;
}

// 函数定义
float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float)sum / length; // 返回浮点数平均值
}