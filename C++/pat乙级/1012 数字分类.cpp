/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,x[10000],A1=0,A2=0,A3=0,A4=0,A5=0,a1n=0,a2n=1,a3n=0,a4n=0;
	double ave;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i];
		if(x[i]%10==0)
		{
			A1+=x[i];
			a1n++;
		}
		if(x[i]%5==1)
		{
			if(a2n%2==0)
			{
				A2-=x[i];
			}
			else
			{
				A2+=x[i];
			}
			a2n++;
		}
		if(x[i]%5==2)
		{
			a3n++;
		}
		if(x[i]%5==3)
		{
			A4+=x[i];
			a4n++;
		}
		if(x[i]%5==4)
		{
			A5=(A5>x[i]?A5:x[i]);
		}
		ave=A4/a4n;
	}
	cout<<A1<<' '<<A2<<' '<<A3<<' '<<fixed<<setprecision(1)<<A4<<' '<<A5;
}*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N,num[1000];
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>num[i];
	int sumA1=0,sumA2=0,sumA4=0,cntA3=0,cntA4=0;//初始化为0并以是否为0为判定标准 
	bool A2=false;//注意由于sumA2可能为0，故以A2为判定标准 
	int sign=1,max=0; 
	for(int i=0;i<N;i++)
	{
		if(num[i]%5==0&&num[i]%2==0)//注意两个条件要同时成立 
		sumA1+=num[i];
		else if(num[i]%5==1)
		{
			A2=true;
			sumA2+=num[i]*sign;
			sign*=-1;
		}
		else if(num[i]%5==2)
		cntA3++;
		else if(num[i]%5==3)
		{
			sumA4+=num[i];
			cntA4++;
		}
		else if(num[i]%5==4)
		{
			if(max<num[i])
			max=num[i];
		}
	}
	if(sumA1)
	cout<<sumA1;
	else
	cout<<'N';
	if(A2)
	cout<<' '<<sumA2;
	else
	cout<<' '<<'N';
	if(cntA3)
	cout<<' '<<cntA3;
	else
	cout<<' '<<'N';
	if(cntA4)
	cout<<' '<<setiosflags(ios::fixed)<<setprecision(1)<<sumA4*1.0/cntA4;
	else
	cout<<' '<<'N';
	if(max)
	cout<<' '<<max;
	else
	cout<<' '<<'N';
	return 0;
}

