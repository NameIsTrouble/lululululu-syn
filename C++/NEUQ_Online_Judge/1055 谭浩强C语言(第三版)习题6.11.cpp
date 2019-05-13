#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a;
	cin>>a;
	double x1=a/2;
	double x2=(x1+a/x1)/2;
	for(;x1-x2>=1e-5||x1-x2<=-1e-5;)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	cout<<fixed<<setprecision(3)<<x2;
	return 0;
}
