#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int floor[n][n];int i=0;
        for(int line=0;line<n;line++)//count upperpart of lines
        {
            if(line%2==0)
            {
                int row=line,col=0;
                for(int t=0;t<line+1;t++)
                {
                    floor[row][col]=i+1;
                    row--;
                    col++;
                    i++;
                }
            }
            else
            {
                int row=0,col=line;
                for(int t=0;t<line+1;t++)
                {
                    floor[row][col]=i+1;
                    row++;
                    col--;
                    i++;
                }
            }
        }
        for(int line=n;line<2*n-1;line++)//count lowerpart of lines
        {
            if(line%2==0)
            {
                int row=n-1,col=line-n+1;
                for(int t=0;t<2*n-line-1;t++)
                {
                    floor[row][col]=i+1;
                    row--;
                    col++;
                    i++;
                }
            }
            else
            {
                int row=line-n+1,col=n-1;
                for(int t=0;t<2*n-line-1;t++)
                {
                    floor[row][col]=i+1;
                    row++;
                    col--;
                    i++;
                }
            }
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)printf("%d",floor[i][j]);
            else printf(" %d",floor[i][j]);
        }
        printf("\n");
    }
}