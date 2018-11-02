#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long long int exc(int x, int z)
{
	if (z == 10)
	{
		return x;
	}
	else
	{
		long long int sum = 0;
		for (int i = 0; x != 0; i++)
		{
			sum += x % 10 * pow(z, i);
			x /= 10;
		}
		return sum;
	}
}
int main()
{
	int n, z;
	int x;
	while (cin >> n)
	{
		long long int sum = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d(%d)", &x, &z);
			sum += exc(x, z);
		}
		printf("%ld\n", sum);
	}
	system("pause");
	return 0;
}