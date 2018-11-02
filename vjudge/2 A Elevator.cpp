#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		int sum=0,x,z=0;
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x>z)
			{
				sum+=(x-z)*6;
				z=x;
			}
			else if(x<z)
			{
				sum+=(z-x)*4;
				z=x;
			}
		}
		sum+=n*5;
		printf("%d\n",sum);
		scanf("%d",&n);
	}
	system("pause");
	return 0;
}