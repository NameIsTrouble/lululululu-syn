#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string test;
	while(cin>>test)
	{
		int l=test.size();
		if(l==3)
		{
			for(int i=0;i<test[0]-'0';i++)
			{
				cout<<'B';
			}
			for(int i=0;i<test[1]-'0';i++)
			{
				cout<<'S';
			}
			for(int i=1;i<=test[2]-'0';i++)
			{
				cout<<i;
				if(i==test[2]-'0')
				{
					cout<<endl;
				}			
			}
		}
		else if(l==2)
		{
			for(int i=0;i<test[0]-'0';i++)
			{
				cout<<'S';
			}
			for(int i=1;i<=test[1]-'0';i++)
			{
				cout<<i;
				if(i==test[1]-'0')
				{
					cout<<endl;
				}
			}
		}
		else if(l==1)
		{
			for(int i=1;i<=test[0]-'0';i++)
			{
				cout<<i;
				if(i==test[0]-'0')
				{
					cout<<endl;
				}
			}
		}
	}
	return 0;
}
