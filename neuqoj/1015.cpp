#include<iostream>
using namespace std;
int main()
{
	for(int i=42;i>10&&i<=1000;i++)
	{
		if(i%42==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
