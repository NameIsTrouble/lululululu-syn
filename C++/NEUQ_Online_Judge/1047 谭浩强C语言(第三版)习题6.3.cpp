#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0,a;
	for(int i=1;i<=n;i++)
	{
		int m=pow(10,n-i);
		a=2*i*m;
		sum+=a;
	}
	cout<<sum;
	return 0;
}
