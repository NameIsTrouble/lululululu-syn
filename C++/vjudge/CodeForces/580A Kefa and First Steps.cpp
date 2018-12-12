#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int n;
	long long int a[100100];
	int last=0,l=1,max=0,flag=1,flag2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		{
			l++;
			
		}
		else
		{
			if(max<l)
			{
				max=l;
			}
			l=1;
		}
	}
	if(l>max)
	{
		max=l;
	}
	cout<<max<<endl;
	//system("pause");
	return 0;
}