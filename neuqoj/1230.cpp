#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int b,c;
		cin>>b>>c;
		if(b>=100)
		{
			b%=100;
		}
		if(c>=100)
		{
			c%=100;
		}
		int sum=b+c;
		if(sum>=100)
		{
			sum%=100;
		}
		cout<<sum<<endl;
	}
	return 0;
}
