#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	int M;
	char a[1000];
	cin>>M;
	getchar();
	for(int i=1;i<=M;i++)
	{
		int ble=0,sle=0,num=0,oth=0;
		a[1000]={0};
		gets(a);
		int l=strlen(a);
		for(int j=0;j<l;j++)
		{
			if(a[j]>='0'&&a[j]<='9')
			{
				num=1;
			}
			else if(a[j]>='A'&&a[j]<='Z')
			{
				ble=1;
			}
			else if(a[j]>='a'&&a[j]<='z')
			{
				sle=1;
			}
			else if(a[j]=='~'||a[j]=='!'||a[j]=='@'||a[j]=='#'||a[j]=='$'||a[j]=='%'||a[j]=='^')//if((a[j]>=33&&a[j]<=47)||(a[j]>=58&&a[j]<=64)||(a[j]>=91&&a[j]<=96)||(a[j]>=123&&a[j]<=126))
			{
				oth=1;
			}
		}
		int sum=0;
		sum=num+ble+sle+oth;
		if(l>=8&&l<=16)
		{
			if(sum>=3) 
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
		continue;
	}
	return 0;
}
