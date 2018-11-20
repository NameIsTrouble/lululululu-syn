#include<iostream>
using namespace std;
int main()
{
	for(int n=201; n<300; n+=2)
	{
		int m;
		for(m=2; m<n; m++)
			if(n%m==0)break;
		if(m==n) cout<<n<<endl;
	
	}
	return 0;
}