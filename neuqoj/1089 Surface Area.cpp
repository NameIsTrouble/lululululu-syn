#include<iostream>
using namespace std;
int main()
{
	int T;
	int a[1000],b[1000],c[1000],s[1000];
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		s[i]=(a[i]*b[i]+a[i]*c[i]+b[i]*c[i])*2;
	}
	for(int i=0;i<T;i++)
	{
		cout<<s[i]<<endl;
	}
	return 0;
} 
