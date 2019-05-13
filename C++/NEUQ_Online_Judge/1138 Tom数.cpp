#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		long long int sum=0;
		int l=a.length();
		for(int i=0;i<l;i++)
		{
			sum+=a[i]-'0';
		}
		cout<<sum<<endl;
	}
	return 0;
}
