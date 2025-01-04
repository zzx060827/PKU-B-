#include <stdio.h>

int visit(int a[][100], int row, int cal, int x, int y);

int main() 
{
    int row,cal;
    scanf("%d %d",&row ,&cal);
    int a[row][cal];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cal;j++)
        {
            scanf("%d",&a[i][j]);
            visited[i][j]=0;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cal;j++)
        {
            

        }
    }
}



int visit(int a[][100], int row, int cal, int x, int y) // 修改访问函数参数
{
    // 边界检查
    if (x < 0 || x >= row || y < 0 || y >= cal || a[x][y] != 1 || visited[x][y] == 1) {
        return; // 如果超出边界或已经访问或不是1则返回
    }

    count++;
    visited[x][y] = 1; // 标记为访问过
    
    // 递归访问四个方向
    visit(a, row, cal, x + 1, y); // 下
    visit(a, row, cal, x - 1, y); // 上
    visit(a, row, cal, x, y + 1); // 右
    visit(a, row, cal, x, y - 1); // 左
}