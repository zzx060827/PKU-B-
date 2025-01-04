#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int n;
	int i,j;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<n/i<<endl;
			break;
		}
	}
	return 0;
}