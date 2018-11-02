#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int t;
	string a[10000][2];
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a[i][0];
		cin>>a[i][1];
	}
	int l1=strlen(a[10000])
	for(int i=1;i<=t;i++)
	{
		cout<<"Case "<<i<<':'<<endl;
		cout<<a[i][0]<<" + "<<a[i][1]<<" = "<<a[i][0]+a[i][1]<<endl;
	}
	return 0;
}
//同位相加 
