#include<iostream>
using namespace std;
int main()
{
	long long int n;
 	while(cin>>n)
 	{
	 	long long int F(long long int n);
		long long int s(long long int n);
	 	cout<<s(n);
	}
 	return 0;
}
long long int F(long long int n)
{
	if(n==1||n==0)
		return 1;
	return F(n-1)*n;
 } 
long long int s(long long int n)
{
 	if(n==1||n==0)
 		return 1;
 	return s(n-1)+F(n);
}

