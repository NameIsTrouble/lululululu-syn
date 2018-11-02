#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
	char test[3],mid1[3],mid2[3];
	int t,m1,m2;
	cin>>test;
	atoi(test,t,10);
	while(1)
	{
		if(test[0]==test[1]==test[2]==test[3])
		{
			cout<<t<<" - "<<t<<" = "<<0<<endl;
			break;
		}
		itoa(t,test,10);
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
			{
				if(test[i]<=test[j])
				{
					mid1[i]=test[j];
					mid1[j]=test[i];
					mid2[i]=test[i];
					mid2[j]=test[j];
				}
				else
				{
					mid1[i]=test[i];
					mid1[j]=test[j];
					mid2[i]=test[j];
					mid2[j]=test[i];
				}	
			}
		}
		atoi(test,t,10);
		atoi(mid1,m1,10);
		atoi(mid2,m2,10);
		t=m1-m2;
		if(t==1)
		{
			cout<<m1<<" - "<<m2<<" = "<<t<<endl;
			break;
		}
		else
		{
			cout<<m1<<" - "<<m2<<" = "<<t<<endl;
		}
	}
	return 0;
}
