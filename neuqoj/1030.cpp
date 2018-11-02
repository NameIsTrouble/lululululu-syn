#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int r;
	double s,pi=3.1415926;
	for(r=1;r<=10;r++)
	{
		s=pi*r*r;
		if(s>=40&&s<=90)
		{
			cout<<"r="<<r<<' ';
			cout<<"area="<<fixed<<setprecision(2)<<s<<endl;
		}
	}
	return 0;
}
