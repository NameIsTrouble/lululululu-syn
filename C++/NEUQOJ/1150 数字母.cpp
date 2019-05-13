#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[1000],b[100];
	gets(a);
	int l1=strlen(a);
	for(int i=0,j=0;i<l1;i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			b[j]=a[i];
			j++;
		}
	}
	int l2=strlen(b);
	cout<<l2;
	return 0;
}
