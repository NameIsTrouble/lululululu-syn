#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string xh[100];
	string name[100];
	int c[100],d[100],e[100];
	int aver1=0,aver2=0,aver3=0;
	int count,sum,max;
	for(int i=0;i<n;i++)
	{
		cin>>xh[i]>>name[i]>>c[i]>>d[i]>>e[i];
		aver1+=c[i];
		aver2+=d[i];
		aver3+=e[i];
		sum=c[i]+d[i]+e[i];
		if(i==0)
		{
			max=sum;
			count=i;
		}
		if(max<sum)
		{
			max=sum;
			count=i;
		}
	}
	aver1/=n;
	aver2/=n;
	aver3/=n;
	cout<<aver1<<' '<<aver2<<' '<<aver3<<endl;
	cout<<xh[count]<<' '<<name[count]<<' '<<c[count]<<' '<<d[count]<<' '<<e[count];
	return 0;
} 
