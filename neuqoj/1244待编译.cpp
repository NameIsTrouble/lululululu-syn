#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	string b=1;
	cin>>a;
	int c[10];
	c[10]={0};
	for(;b<=a;b++)
	{
		int l=strlen(b);
		for(int i=1;i<=l;i++)
		{
			if(b[i]=='0')
			{
				c[0]++;
			}
			else if(b[i]=='1')
			{
				c[1]++;
			}
			else if(b[i]=='2')
			{
				c[2]++;
			}
			else if(b[i]=='3')
			{
				c[3]++;
			}
			else if(b[i]=='4')
			{
				c[4]++;
			}
			else if(b[i]=='5')
			{
				c[5]++;
			}
			else if(b[i]=='6')
			{
				c[6]++;
			}
			else if(b[i]=='7')
			{
				c[7]++;
			}
			else if(b[i]=='8')
			{
				c[8]++;
			}
			else if(b[i]=='9')
			{
				c[9]++;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
 } 
