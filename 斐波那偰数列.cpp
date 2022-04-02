#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	int d[1010];
	cin>>n;
	d[1]=1;d[0]=1; 
	for(int i=n-1;i>=2;i++)
	{
		 d[i] = d[i-1]+d[i-2];
	}
	cout<<d[n-1]<<"ded"<<endl; 
	return 0;
}
