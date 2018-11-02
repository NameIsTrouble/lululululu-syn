#include<iostream>
using namespace std;
int main()
{
	int M,suma=1,sumb=1,a,b;
	cin>>M;
	for(int i=1;i<=M;i++)
	{
		cin>>a>>b;
		for(int j=2;j<a;j++)
		{
			if(a%j==0)
			{
				suma+=j;
			}
		}
		for(int v=2;v<b;v++)
		{
			if(b%v==0)
			{
				sumb+=v;
			}
		}
		if(a==sumb&&b==suma)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
