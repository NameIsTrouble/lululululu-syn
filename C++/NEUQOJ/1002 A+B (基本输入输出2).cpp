#include <iostream>

using namespace std;

int main()
{
	int a[2], n, sum[100];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			cin >> a[j];
		}
		sum[i] = a[1] + a[2];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << sum[i] << endl;
	}
	
	return 0;
}
