#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
 	char a[1000];
	gets(a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			cout<<a[i];
		}
	}
	return 0;
}
