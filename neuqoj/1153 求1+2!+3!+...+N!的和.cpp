#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	long long int sum=0,alt=1;
	for(int i=1;i<=N;i++)
	{
		alt*=i;
		sum+=alt;
	}
	cout<<sum;
	return 0;
}
