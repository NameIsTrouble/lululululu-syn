#include<iostream>
using namespace std;
bool Is_Prime[10000];




//(int x)
/*{
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			return false;
			break;
		}
	}
	return true;
}*/
int main()
{
	for(int i=0;i<=10000;i++)
	{
		Is_Prime[i]=true;
	}
	Is_Prime[0]=Is_Prime[1]=false;
	int Prime[10000],count=0;
	for(int i=2;count<=10000;i++)
	{
		if(Is_Prime[i]==true)
		{
			Prime[count]=i;
			count++;
			for(int j=2*i;j<=10000;j+=i)
			{
				Is_Prime[j]=false;
			}
		}
	}
	int m,n,k=0;
	cin>>m>>n;
	for(int i=m-1;i<n-1;i++)
	{
		++k;
		cout<<Prime[i];
		if(k%10==0)
		{
			cout<<endl;
		}
		else
		{
			cout<<' ';
		}
	}
	cout<<Prime[n-1];
	return 0;
}
