#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int l=str.size(),sum=0;
	string num[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i=0;i<l;i++)
	{
		sum+=str[i]-'0';
	}
	char str2[100000];
	sprintf(str2,"%d",sum);
	int size=strlen(str2);
	for(int i=0;i<size;i++)
	{
		int n=str2[i]-'0';
		cout<<num[n];
		if(i!=size-1)
		{
			cout<<' ';
		}
	}
	return 0;
 } 
