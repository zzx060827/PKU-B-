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
	//��max[i]��ȷ��ÿһ�е����ֵ�� 
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
	//ȷ��ÿ��max�ǲ�����һ�е���Сֵ 
	for(i=0;i<n;i++)
	{
		Flag = 0;
		
		for(j=0;j<n;j++)
		{
			if(max[i] > a[j][J[i]])//�������˵�����max[i]�����ǰе� 
			{
				Flag = 1;
			}
		}
		sum += Flag;//ͳ��Flag���ܺͣ����ÿ�е�max[i]�����ǰе�,sumӦ����n��Flag���ܺ�(sum=n) 
		if(Flag == 0)
		{
			printf("a[%d][%d]=%d",i+1,J[i]+1,max[i]);
		} 
	}
	if(sum == n)//ͳ��Flag���ܺͣ����ÿ�е�max[i]�����ǰе�,sumӦ����n��Flag���ܺ�(sum=n) 
	{
		printf("no");
	}
	
	return 0;
}
