#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r,pi=3.1415926,v;
	while(cin>>r)
	{
		v=(4*pi*r*r*r)/3;
		cout<<fixed<<setprecision(3)<<v<<endl;
	}
	return 0;
 }