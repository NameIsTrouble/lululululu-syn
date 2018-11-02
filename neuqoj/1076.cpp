/*#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	gets(a);
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(a[i]=='z'||a[i]=='Z')
		{
			a[i]-=25;
			cout<<a[i]<<' ';
		}
		else if(a[i]>='a'&&a[i]<'z'||a[i]>='A'&&a[i]<'Z')
		{
			a[i]+=1;
			cout<<a[i]<<' ';
		}
		else if(a[i]!=' ')
		{
			cout<<a[i]<<' ';
		}
	}
	int c=strlen(a);
	if(a[c-1]=='z'||a[c-1]=='Z')
		{
			a[c-1]-=25;
			cout<<a[c-1];
		}
	else if(a[c-1]>='a'&&a[c-1]<'z'||a[c-1]>='A'&&a[c-1]<'Z')
	{
		a[c-1]+=1;
		cout<<a[c-1];
	}
	else
	{
		cout<<a[c-1];
	}
	return 0;
}*/
#include<iostream>
#include<cstring>
#define ct 1 
using namespace std;
int main()
{
 	char a[100];
 	int i;
 	gets(a);
#if ct
 	for(i=0;i<strlen(a)&&((a[i])!='\0');i++)
 	{
  		if(((a[i]>=97)&&(a[i]<=122))||((a[i]>=65)&&(a[i]<=90)))
  		{
   			if((a[i]==122)||(a[i]==90)) a[i]-=25;
   			else a[i]+=1;
  		}
 	}
 	a[i]='\0';
 	puts(a);
#else puts(a);
#endif
}
