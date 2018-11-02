#include<iostream>
using namespace std;
bool Cmp(long long int x,long long int y,long long int z)
{
	if(x+y>z)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int t,a=0,b=0,c=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b>>c;
		if(Cmp(a,b,c)==true)
		{
			cout<<"Case #"<<i<<": true"<<endl;
		}
		else if(Cmp(a,b,c)==false)
		{
			cout<<"Case #"<<i<<": false"<<endl;
		}
	}
	return 0;
}
