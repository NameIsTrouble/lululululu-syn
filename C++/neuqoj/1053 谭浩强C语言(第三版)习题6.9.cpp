#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double M,N,a,sum;
	cin>>M>>N;
	sum=M;
	a=M;
	for(int i=1;i<N;i++)
	{
		a=a/2;
		sum=sum+a*2;
	}
	cout<<fixed<<setprecision(2)<<a/2<<' '<<fixed<<setprecision(2)<<sum;
	return 0;
}
