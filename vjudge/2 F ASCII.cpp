#include<iostream>
using namespace std;
int main()
{
	int t,x;
	char op[10000];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&x);
		op[i]=x;
	}
	for(int i=0;i<t;i++)
	{
		printf("%c",op[i]);
	}
	system("pause");
	return 0;
}