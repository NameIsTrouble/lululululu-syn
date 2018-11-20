#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int max=1,min;
	for(int i=1;i<=n&&i<=m;i++)
	{
		if(n%i==0&&m%i==0)
		{
			max=i;
		}
	}
	int z;
	if(n<m)
	{
		z=m;
	}
	else
	{
		z=n;
	}
	for(min=z;min%n!=0||min%m!=0;)
	{
		min++;
	}
	cout<<max<<' '<<min;
	return 0;
}
