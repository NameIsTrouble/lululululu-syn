#include<iostream>
using namespace std;
int main()
{
	int n,s=1;
	cin>>n;
	if(n<=1)
	{
		s=1;
	}
	if(n>2&&n%2==0)
	{
		s=0;
	}
	else 
	{
		for(int i=3;i<=n/2;i++)
		{
			s=1;
			if(n%i==0)
			{
				s=0;
				break;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}