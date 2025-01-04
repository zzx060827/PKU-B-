#include<stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	int i,j=0;
	int max[n];
	int J[n];
	int Flag=0;
	int sum=0;
	//
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	//找max[i]（确定每一行的最大值） 
	for(i=0;i<n;i++)
	{
		max[i] = a[i][0];
		for(j=0;j<m;j++)
		{
			if(a[i][j] > max[i])
			{
				max[i] = a[i][j];
				J[i] = j;
			}
		}
	}
	//确定每个max是不是这一列的最小值 
	for(i=0;i<n;i++)
	{
		Flag = 0;
		
		for(j=0;j<n;j++)
		{
			if(max[i] > a[j][J[i]])//如果进入说明这个max[i]并不是靶点 
			{
				Flag = 1;
			}
		}
		sum += Flag;//统计Flag的总和，如果每行的max[i]都不是靶点,sum应该是n个Flag的总和(sum=n) 
		if(Flag == 0)
		{
			printf("a[%d][%d]=%d",i+1,J[i]+1,max[i]);
		} 
	}
	if(sum == n)//统计Flag的总和，如果每行的max[i]都不是靶点,sum应该是n个Flag的总和(sum=n) 
	{
		printf("no");
	}
	
	return 0;
}
