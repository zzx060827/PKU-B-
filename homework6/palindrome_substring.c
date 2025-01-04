#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 函数用于判断从索引i和j之间的字符串是否为回文
int isPalindrome(char* s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return 0; 
        i++;
        j--;
    }
    return 1; 
}

int main() {
    char str[501]; 
    scanf("%s", str); 
    char isP[501][501];int length[501]={0};
    int count=0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    { // 遍历每个字符作为子串的中心
        for (int j = i+1; j < len; j++) { 
            // 检查从i到j的子串是否为回文
            if (isPalindrome(str, i, j)) 
            {
                length[count]=j-i+1;
                for(int k = i; k <= j; k++)
                {
                    isP[count][k-i]=str[k];
                }
                count++;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<count-i-1;j++)
        {
            if(length[j]>length[j+1])
            {
                int temp=length[j];
                length[j]=length[j+1];
                length[j+1]=temp;
                char temp2[501];
                strcpy(temp2,isP[j]);
                strcpy(isP[j],isP[j+1]);
                strcpy(isP[j+1],temp2);
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%s\n",isP[i]);
    }
    return 0;
}