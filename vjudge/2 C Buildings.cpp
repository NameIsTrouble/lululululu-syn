#include <iostream>
using namespace std;
int main()
{
	int n, m, x, t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n * m; i++)
		{
			scanf("%d", &x);
			if (x == 1)
			{
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}