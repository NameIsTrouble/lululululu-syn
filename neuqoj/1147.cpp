#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int alt=a*a*a;
	cout<<a<<'*'<<a<<'*'<<a<<'='<<alt<<'=';
	int fir=a*a-a+1;
	cout<<fir;
	for(int i=1;i<a;i++)
	{
		fir+=2;
		cout<<'+'<<fir;
	}
	return 0;
}
