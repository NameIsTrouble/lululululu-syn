#include<iostream>
using namespace std;
int main()
{
	long long int a[100],m=1,l;
	for(int i=0;;i++)
	{
		cin>>a[i];
		char b=getchar();
		if(b=='\n')
		{
			l=i;
			break;
		}
	}
	for(int i=1;i<l;i++)
	{
		if(a[i]<=a[i-1])
		{
			m++;
		}
	}
	cout<<m;
	return 0;
}
