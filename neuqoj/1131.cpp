#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	double x1,x2,xm;
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	if(x1<x2)
	{
		xm=x1;
		x1=x2;
		x2=xm;
		cout<<fixed<<setprecision(2)<<x1<<' '<<fixed<<setprecision(2)<<x2;
	}
	else
	{
		cout<<fixed<<setprecision(2)<<x1<<' '<<fixed<<setprecision(2)<<x2;
	}
	return 0;
}
