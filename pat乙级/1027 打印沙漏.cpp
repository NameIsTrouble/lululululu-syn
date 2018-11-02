#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int n,sum,l;
	char a;
	scanf("%d",&n);
	scanf(" %c",&a);
	for(int i=1;;i++)
	{
		sum=2*i*i-1;
		if(sum<=n&&2*(i+1)*(i+1)-1>n)
		{
			l=i;
			break;
		}
	}
	int Num=2*l-1;
	for(int i=1;i<=l;i++)
	{
		for(int j=1;j<=i-1;j++)
		{
			printf("%c",' ');
		}	
		for(int j=1;j<=Num-2*(i-1);j++)
		{
			printf("%c",a);
			if(j==Num-2*(i-1))
			{
				printf("\n");
			}
		}
	}
	for(int i=2;i<=l;i++)
	{
		for(int j=1;j<=(Num-(2*i)+1)/2;j++)
		{
			printf("%c",' ');
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("%c",a);
			if(j==2*i-1)
			{
				printf("\n");
			}
		}	
	}
	printf("%d\n",n-sum);
	return 0;	
}
