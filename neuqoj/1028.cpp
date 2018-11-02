#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(;n!=1;)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				n/=i;
				cout<<i<<' ';
				break;
			}
		}
	}
	return 0;
} 
