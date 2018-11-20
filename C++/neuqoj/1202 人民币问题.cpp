#include<iostream>
using namespace std;
int main()
{
	int a,count=0;
	cin>>a;
	for(int i=1;i<a/5;i++)
	{
		for(int j=1;j<a/2;j++)
		{
			for(int v=1;v<a/1;v++)
			{
				if(a==5*i+2*j+1*v)
				{
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;
}
