#include<iostream>
using namespace std;
int sum(int n)
{
	if(n<4)
	{
		return 1;
	}
	else if(n==4)
	{
		return 2;
	}
	else 
	{
		return sum(n-1)+sum(n-3);
	}
	
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	return 0;
}
