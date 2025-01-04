#include<stdio.h> 
#include<math.h> 
int main() { long long a,m; while (scanf("%lld%lld",&a,&m)!=EOF) { int d=1; long long temp=a; while((a%m)!=1) { a*=temp; d++; } printf("%d\n",d); } return 0; }