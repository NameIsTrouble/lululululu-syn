#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long int a[22];
	double num1=0,sum=0,num2=0;
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<20;j++)
	{
		if(a[j]<0)
		{
			num1++;
		}
		else if(a[j]>0)
		{
			sum+=a[j];
			num2++;
		}
	}
	float aver=sum/num2;
	cout<<num1<<endl;
	cout<<fixed<<setprecision(2)<<aver;
	return 0;
}
