//WA
#include<iostream>
using namespace std;
int main()
{
	int n,m,k;
	int Unfixed[10005][2],Num[105][10000];
	bool Judge[10000];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>Unfixed[i][0]>>Unfixed[i][1];
	}
	for(int i=0;i<m;i++)//�ڼ��� 
	{
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>Num[i][j];
		}
		for(int j=0;j<k;j++)
		{
			for(int v=0;v<n;v++)
			{
				if(Num[i][j]==Unfixed[v][0])
				{
					for(int z=0;z<k;z++)
					{
						if(Num[i][z]==Unfixed[v][1])
						{
							Judge[i]=false;
							break;
						}
						else
						{
							Judge[i]=true;
						}
					}
					break;
				}
				else if(Num[i][j]==Unfixed[v][1])
				{
					for(int z=0;z<k;z++)
					{
						if(Num[i][z]==Unfixed[v][0])
						{
							Judge[i]=false;
							break;
						}
						else
						{
							Judge[i]=true;
						}
					}
					break;
				} 
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		if(Judge[i]==true)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
