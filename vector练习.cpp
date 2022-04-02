#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>a;
//	s.push_back("sdcd");
//	cout<<s.size()<<s[0];
	a.push_back(50);
	a.push_back(20);
	a.push_back(70);
//	a.insert(a.begin()+1,15);
//	a.erase(a.begin(),a.begin()+1);
//	cout<<a[0]<<" "<<a[1]<<endl<<a.size()<<endl;
	sort(a.begin(),a.end(),reverse(a.begin(),a.end());
	vector<int>::iterator it;
	reverse(a.begin(),a.end());
	for(it=a.begin();it!=a.end();it++)
	cout<<*it<<" ";
} 
