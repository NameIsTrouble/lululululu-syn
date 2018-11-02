#include<iostream>
using namespace std;
int main()
{
	int x,y,h1,h2,t1,t2,n1,n2;
	for(x=300;x<1000;x++)
	{
		y=1333-x;
		h1=x/100;
		t1=x/10-10*h1;
		n1=x-100*h1-10*t1;
		h2=y/100;
		t2=y/10-10*h2;
		n2=y-100*h2-10*t2;
		if(h1==n2&&t1==t2&&n1==h2)
		{
			cout<<x<<'+'<<y<<'='<<1333<<endl;
		}
	}
	return 0;
}
