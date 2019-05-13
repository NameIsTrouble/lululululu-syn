#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a[100],sum=0;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int max,min,med1,med2,maxn,minn;
	max=a[0];
	min=a[0];
	for(int i=0;i<4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxn=i;
		}
		if(min>a[i])
		{
			min=a[i];
			minn=i;
		}
	}
	int j=0;
	for(int i=0;j==0,i<4;i++)
	{
		int b;
		b=sum-max-min-a[i];
		if(a[i]<b&&i!=maxn&&i!=minn)
		{
			med1=a[i];
			med2=b;
			j++;
		}
		else if(a[i]>b&&i!=maxn&&i!=minn)
		{
			med2=a[i];
			med1=b;
			j++;
		}
	}
	cout<<min<<' '<<med1<<' '<<med2<<' '<<max;
	return 0;
}
