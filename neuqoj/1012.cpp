#include<iostream>
using namespace std;
int a,b,n;
int F(int n)
{
	if(n==1)
	{
		return a;
	}
	else if(n==2)
	{
		return b;
	}
	else if(n%2!=0)
	{
		return F(n-1)+F(n-2);
	}
	else
	{
		return F(n-1)+F(n-2)+F(n-3);
	}
}
int main()
{
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>a>>b>>n;
		cout<<F(n)<<endl;
	}
	return 0;
}
