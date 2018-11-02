#include<iostream>
#define exc(a,b)c=d,d=b,b=c
using namespace std;
int main()
{
	int d,b,c;
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	int sum=a[0]+a[1]+a[2],max,min;
	max=((a[0]>a[1]?a[0]:a[1])>a[2]?(a[0]>a[1]?a[0]:a[1]):a[2]);
	min=((a[0]<a[1]?a[0]:a[1])<a[2]?(a[0]<a[1]?a[0]:a[1]):a[2]);
	cout<<min<<' '<<sum-max-min<<' '<<max<<' ';
	return 0;
}
