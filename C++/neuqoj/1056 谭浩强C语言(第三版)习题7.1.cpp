#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i+=1)
	{
		int m;
		for(m=2; m<i; m++)
			if(i%m==0)break;
		if(m==i) cout<<i<<endl;
	
	}
	return 0;
}
