    #include <stdio.h>
    #include <limits.h>

    int main() 
    {
        int n,min=0,court=0;
        scanf("%d", &n);
        int matrix[n][n][n];
        int sum[n];
        for(int l=0;l<n;l++){sum[l]=0;for(int i=0;i<n;i++){for(int j=0;j<n;j++){matrix[l][i][j]=0;}}}
        for(int l=0;l<n;l++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++){scanf("%d",&matrix[l][i][j]);}
            }
            
        }
        for(int l=0;l<n;l++)//dispose every matrix
        {
        for(int k=0;k<n-1;k++)
        {
        for(int i=0;i<n-k;i++)//dispose every row
        {
            min=INT_MAX;
            for(int j=0;j<n-k;j++)//find the minimum value in the row
            {
                if(matrix[l][i][j]<min){min=matrix[l][i][j];}
            }
            for(int j=0;j<n-k;j++)//subtract the minimum value from every element in the row
            {
                matrix[l][i][j]-=min;
            }
        }
        for(int j=0;j<n-k;j++)//dispose every column
        {
            min=INT_MAX;
            for(int i=0;i<n-k;i++)//find the minimum value in the column
            {
                if(matrix[l][i][j]<min){min=matrix[l][i][j];}
            }
        for(int i=0;i<n-k;i++)//subtract the minimum value from every element in the column
        {
            matrix[l][i][j]-=min;
        }
        }
        sum[l]+=matrix[l][1][1];court++;
        //subtraction
        for(int j=0;j<n-k;j++){matrix[l][1][j]=0;}
        for(int j=0;j<n-k;j++){matrix[l][j][1]=0;}
        for(int j=1;j<n-k;j++){matrix[l][0][j]=matrix[l][0][j+1];}
        for(int i=1;i<n-k;i++){matrix[l][i][0]=matrix[l][i+1][0];}
        for(int i=1;i<n-k;i++){for(int j=1;j<n-k;j++){matrix[l][i][j]=matrix[l][i+1][j+1];}}
        }
        }
        for(int l=0;l<n;l++){printf("%d\n",sum[l]);}
    }