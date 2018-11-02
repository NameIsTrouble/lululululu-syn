#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int sp=0,le=0,nu=0,ot=0;
	int a;
	while(a=getchar())
	{
		if(a=='\n')
		{
			break;
		}
		else if(a==' ')
		{
			sp++;
		}
		else if(a>='0'&&a<='9')
		{
			nu++;
		}
		else if('a'<=a&&a<='z'||'A'<=a&&a<='Z')
		{
			le++;
		}
		else
		{
			ot++;
		}
	}
	cout<<le<<' ';
	cout<<nu<<' ';
	cout<<sp<<' ';
	cout<<ot;
	return 0;
}
