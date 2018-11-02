#include<iostream>
#define exc(a,b) c=a,a=b,b=c;
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	exc(a,b);
	cout<<a<<' '<<b;
	return 0;
}
