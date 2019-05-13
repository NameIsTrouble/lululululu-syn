#include<iostream>
using namespace std;
int main()
{
	int N,sum;
	cin>>N;
	for(int i=6;i<N;i++)
	{
		sum=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
			if(i==sum&&j==i-1)
			{
				cout<<i<<' '<<"its factors are 1 ";
				for(int v=2;v<i;v++)
				{
					if(i%v==0)
					{
						cout<<v<<' ';
					}
				}
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
