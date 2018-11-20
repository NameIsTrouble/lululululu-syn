#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[150];
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		cout<<a[i];
	}
	for(int i=strlen(a)-1;i>=0;i--)
	{
		cout<<a[i];
	}
	return 0;
} 
