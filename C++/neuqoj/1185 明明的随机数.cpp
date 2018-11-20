#include<iostream>
using namespace std;
int main()
{
	int n,c,count;
	int a[1000],b[1000],d[1000];
	cin>>n;
	count=n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
        	count--;
        }
    }
	cout<<count<<endl;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			continue;
		}
		cout<<a[i]<<' ';
	}	
	cout<<a[n-1];
	return 0;
}
