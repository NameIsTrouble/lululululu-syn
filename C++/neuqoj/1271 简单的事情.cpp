#include<iostream>
using namespace std;
int main()
{
	long long int n,m;
	while(cin>>n>>m)
	{
		long long int alt1=1,alt2=1,alt3=1;
		long long int ans=0;
		long long int a=n-m;
		for(int i=1;i<=n;i++)
		{
			alt1*=i;
		}
		for(int i=1;i<=m;i++)
		{
			alt2*=i;
		}
		for(int i=1;i<=a;i++)
		{
			alt3*=i;
		}
		ans=alt1/(alt2*alt3);
		cout<<ans<<endl;
	}
	return 0;
}
