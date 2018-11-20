#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	float sum1=0,sum2=0,sum3=0;
	for(float i=1;i<=a;i++)
	{
		sum1+=i;
	}
	for(float i=1;i<=b;i++)
	{
		sum2+=i*i;
	}
	for(float i=1;i<=c;i++)
	{
		sum3+=1/i;
	}
	float sum=sum1+sum2+sum3;
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
