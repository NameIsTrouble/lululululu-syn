#include <iostream>
#include<string>
using namespace std;
int main()
{
	long long int n, k,a[5],s;
	a[0]=0;
	cin>>n>>a[1]>>a[2]>>a[3];
	k=n%4;
	if(k==0)
	{
		s=0;
	}
	else if(k==3)
	{
		if(a[1]<=a[2]+a[3]&&a[1]<=3*a[3])
		{
			s=a[1];
		}
		else if(a[2]<=2*a[3])
		{
			s=a[2]+a[3];
		}
		else 
		{
			s=3*a[3];
		}
	}
	else if(k==2)
	{
		if(a[2]>=2*a[1]&&2*a[1]<=2*a[3])
		{
			s=2*a[1];
		}
		else if(a[2]<=2*a[3])
		{
			s=a[2];
		}
		else 
		{
			s=2*a[3];
		}
	}
	else if(k==1)
	{
		if(3*a[1]<=a[1]+a[2]&&a[3]>=3*a[1])
		{
			s=3*a[1];
		}
		else if(a[3]>a[1]+a[2])
		{
			s=a[1]+a[2];
		}
		else
		{
			s=a[3];
		}
	}
	cout<<s<<endl;
	//system("pause");
	return 0;
}