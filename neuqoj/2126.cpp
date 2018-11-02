#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int N,sum=0;
	while(cin>>N)
	{
		if(N==0)
		{
			exit(0);
		}
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<N;j++)
		{
			sum+=a[j];
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
 } 
