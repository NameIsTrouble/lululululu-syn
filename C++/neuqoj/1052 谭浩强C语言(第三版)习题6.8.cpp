#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a=2,b=1,c;
	double sum;
	for(int i=1;i<=n;i++)
	{
		sum+=a/b;
		c=a;
		a+=b;
		b=c;
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
