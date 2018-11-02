#include<iostream>
using namespace std;
bool test(int x)
{
	int flag=0;
	if(x==2||x==3)
	{
		return true;
	}
	else
	{
		for(int j=2;j<=x/2;j++)
		{
			if(x%j==0)
			{
				return false;
				flag=1;
				break;
			}
			if(j==x/2)
			{
				if(flag==0)
				{
					return true;
				}
			}
		}
	}
}
int main()
{
	int n,p[100000],c=0,count=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(test(i)==true)
		{
			p[c]=i;
			if(c>=1)
			{
				if(p[c]-p[c-1]==2)
				{
					count++;
				}
			}
			c+=1;
		}
	}
	cout<<count<<endl;
	return 0;
}
