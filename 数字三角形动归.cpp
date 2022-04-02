#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int n;
int d[101][101];
int MaxSum[101][101];
int maxSum(int i,int j)
{
	if(MaxSum[i][j]!=-1)
	return MaxSum[i][j];
	if(i==n) MaxSum[i][j]= d[i][j];//边界条件 
	else
	{
	int x = maxSum(i+1,j);
	int y = maxSum(i+1,j+1);
	MaxSum[i][j]=max(x,y)+d[i][j];//状态 
}
return MaxSum[i][j];
}
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
				d[i][j]=i+j+19;
				MaxSum[i][j]=-1; 
		cout<<maxSum(1,1)<<endl;
} 
//递归：边界条件 
