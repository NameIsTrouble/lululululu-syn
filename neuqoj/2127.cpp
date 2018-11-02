#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int N,M;
	int sum=0;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>M;
		for(int j=0;j<M;j++)
		{
			cin>>a[j];
		}
		for(int v=0;v<M;v++)
		{
			sum+=a[v];
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}