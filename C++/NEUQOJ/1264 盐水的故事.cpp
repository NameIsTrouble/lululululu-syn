//WA
#include<iostream>
using namespace std;
int main()
{
	double v,d,sum=0,c;
	int t=0,m;
	while(cin>>v>>d)
	{
		c=d;
		m=1;
		while(sum<v)
		{
			sum+=d;
			t+=m+1;
			m++;
			d*=m;
		}
		t-=1;
		for(int i=m;i>=1;i--)
		{
			if((sum-d*i)<v&&(sum-d*(i+1))>=v)
			{
				t-=i;
				t++;
				break;
			}
		}
		cout<<t<<endl;
	}
	return 0;
}
