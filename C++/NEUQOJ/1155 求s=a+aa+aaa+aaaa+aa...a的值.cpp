#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,n,s=0;
	cin>>a>>n;
	for(int i=1,j=n;i<=n;i++,j--)
	{
		int m=pow(10,i-1);
		s+=a*m*j;
	}
	cout<<s;
	return 0;
}
