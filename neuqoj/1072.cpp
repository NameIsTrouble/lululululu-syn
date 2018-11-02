#include<iostream>
#include<iomanip>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
using namespace std;
int main()
{
	double a,b,c,s;
	cin>>a>>b>>c;
	s=S(a,b,c);
	cout<<fixed<<setprecision(3)<<area(s,a,b,c);
	return 0;
}
