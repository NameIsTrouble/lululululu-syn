#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char test[100000];
	while (gets(test))
	{
		int l = strlen(test);
		double sum = 0;
		int flag = 0;
		for (int i = 0; i < l; i += 2)
		{
			if (test[i] == 'A')
			{
				sum += 4;
			}
			else if (test[i] == 'B')
			{
				sum += 3;
			}
			else if (test[i] == 'C')
			{
				sum += 2;
			}
			else if (test[i] == 'D')
			{
				sum += 1;
			}
			else if (test[i] == 'F')
			{
				sum=sum;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%.2lf\n",(double)(2*sum)/(l+1));
		}
		else
		{
			printf("Unknown letter grade in input\n");
		}
	}
	system("pause");
	return 0;
}