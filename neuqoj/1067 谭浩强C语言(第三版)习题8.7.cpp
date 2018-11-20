/*#include<iostream>
using namespace std;
int main()
{
	char a[1000],b[1000];
	int count=1;
	for(int i=0,j=0;;i++)
	{
		cin>>a[i];
		if(getchar()=='\n')
		{
			break;
		}
		count++;
	}
	for(int i=0;i<count;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			cout<<a[i];
		}
	}
	return 0;
}*/
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int count=0;
	gets(a);
    for(int i=0,j=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
        	b[j]=a[i];
        	j++;
        	count++;
		}
    }
    for(int i=0;i<count;i++)
    {
    	cout<<b[i];
	}
    return 0;
}
