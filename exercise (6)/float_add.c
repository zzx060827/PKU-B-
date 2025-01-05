#include <stdio.h>
#include <string.h>

void aligning(char *input1i, char *input2i);
void transfer(char *input1i, int *in1);
void carry(int *sum1i, int leni);

int main() 
{
    int n; scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        int in1[100] = {0}; int de1[100] = {0};
        int in2[100] = {0}; int de2[100] = {0};
        int sumin[100] = {0}; int sumde[100] = {0};
        char input1i[100]={0}; char input1d[100]={0}; 
        char input2i[100]={0}; char input2d[100]={0};
		if(i!=0)getchar();
        scanf("%99[^.]%*c%99s", input1i, input1d); // 注意此处的"%*c"用于消耗掉'.'
        getchar();
        scanf("%99[^.]%*c%99s", input2i, input2d);
        getchar();
        // 对齐输入数组
        aligning(input1i, input2i);
        // 转换输入数组
        transfer(input1i, in1);
        transfer(input1d, de1);
        transfer(input2i, in2);
        transfer(input2d, de2);
        for (int i = 0; i < 100; i++) {
            sumin[i] = in1[i] + in2[i];
            sumde[i] = de1[i] + de2[i];
        }
        int leni = strlen(input1i);
		int lend = 0;
		if(strlen(input1d)>strlen(input2d))
        lend = strlen(input1d);
		else lend = strlen(input2d);
        carry(sumde, lend);
        if (sumde[0] >= 10) {
            sumde[0] -= 10;
            sumin[leni - 1] += 1;
        }
        carry(sumin, leni);
		for(int i = 0; i < leni; i++)
		{printf("%d", sumin[i]);}
		printf(".");
		for(int i=lend-1;i>=0;i--)
		{if(sumde[i]==0){lend--;}
		else{break;}}
        for(int i = 0; i < lend; i++)
		{printf("%d", sumde[i]);}
        printf("\n");
    }
    return 0;
}

void aligning(char *input1i, char *input2i)
{
    int len1 = strlen(input1i);
    int len2 = strlen(input2i);
    if (len1 < len2) {
        int difference = len2 - len1;
        memmove(input1i + difference, input1i, len1 + 1); // 移动字符串内容
        memset(input1i, '0', difference); // 前填充零
    } else if (len1 > len2) {
        int difference = len1 - len2;
        memmove(input2i + difference, input2i, len2 + 1); // 移动字符串内容
        memset(input2i, '0', difference); // 前填充零
    }
}

void transfer(char *input1i, int *in1)
{
    for (int i = 0; input1i[i] != '\0'; i++) {
        in1[i] = input1i[i] - '0'; // 将字符转换为对应的整数值
    }
}

void carry(int *sum1i, int leni)
{
    for (int i = leni - 1; i > 0; i--) {
        if (sum1i[i] >= 10) {
            sum1i[i - 1] ++;
            sum1i[i] -= 10;
        }
    }
}