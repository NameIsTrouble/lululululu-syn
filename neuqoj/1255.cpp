#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		int l=a.size();
		char max=a[0];
		for(int i=0;i<l;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
		for(int i=0;i<l;i++)
		{
			cout<<a[i];
			if(a[i]==max)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}
