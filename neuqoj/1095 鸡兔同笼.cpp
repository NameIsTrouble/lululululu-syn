#include<iostream>
using namespace std;
int main()
{
	int n,m,c,r;
	while(cin>>n>>m)
	{
		c=2*n-m/2;
		r=m/2-n;
		if(m%2==0&&r>=0&&c>=0)
		{
			cout<<c<<' '<<r<<endl;
		}
		else cout<<"No answer"<<endl;
	}
	return 0;
}