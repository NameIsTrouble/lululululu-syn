#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	char b='a'-'A';
	while(cin>>a)
	{
		int l=a.size();
		for(int i=0;i<l;i++)
		{
			if(a[i]>='A'&&a[i]<='Y')
			{
				a[i]+=b+1;
			}
			else if(a[i]=='Z')
			{
				a[i]='a';
			}
			else if(a[i]>='a'&&a[i]<='c')
			{
				a[i]='2';
			}
			else if(a[i]>='d'&&a[i]<='f')
			{
				a[i]='3';
			}
			else if(a[i]>='g'&&a[i]<='i')
			{
				a[i]='4';
			}
			else if(a[i]>='j'&&a[i]<='l')
			{
				a[i]='5';
			}
			else if(a[i]>='m'&&a[i]<='o')
			{
				a[i]='6';
			}
			else if(a[i]>='p'&&a[i]<='s')
			{
				a[i]='7';
			}
			else if(a[i]>='t'&&a[i]<='v')
			{
				a[i]='8';
			}
			else if(a[i]>='w'&&a[i]<='z')
			{
				a[i]='9';
			}
			else
			{
				continue;
			}
		}
		for(int i=0;i<l;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
