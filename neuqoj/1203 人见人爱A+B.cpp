#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ah,am,as,bh,bm,bs,sh,sm,ss;
		cin>>ah>>am>>as>>bh>>bm>>bs;
		ss=(as+bs)%60;
		sm=(am+bm+(as+bs)/60)%60;
		sh=ah+bh+(am+bm+(as+bs)/60)/60;
		cout<<sh<<' '<<sm<<' '<<ss<<endl;
	}
	return 0;
}
