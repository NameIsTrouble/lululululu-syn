#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n,Num_a=0,Num_b=0,Num_c=0,Num_p=0,Num_t=0;
	cin>>n;
	for(int m=0;m<n;m++)
	{
		char test[10000]={0};
		gets(test);
		int l=strlen(test);
		for(int j=0;j<l;j++)
		{
			if(test[j]!='P'&&test[j]!='T'&&test[j]!='A')
			{
				cout<<"NO"<<endl;
				break;
			}
			else if(test[j]=='P')
			{
				Num_p++;
				Num_a=j;
				if(Num_p==2)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
			else if(test[j]=='T')
			{
				Num_t++;
				Num_b=j-Num_a-1;
				if(Num_t==2)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
			Num_c=l-Num_b-Num_a-2;
			if(j==l-1)
			{
				if(Num_c==Num_a*Num_b)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}
