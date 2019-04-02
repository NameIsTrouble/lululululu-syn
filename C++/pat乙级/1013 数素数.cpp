#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

bool IsPrime[1000007];
vector<int> Prime;

void GetPrime()
{
	for (int i = 2; i <= 1000007; ++i)
		if (IsPrime[i])
		{
			Prime.push_back(i);

			for (int j = 2 * i; j <= 1000007; j += i)
				IsPrime[j] = false;
		}
}

int main()
{
	memset(IsPrime, true, sizeof(IsPrime));

	IsPrime[0] = false;
	IsPrime[1] = false;

	int m, n;
	cin >> m >> n;

	GetPrime();

	for (int i = m - 1, k = 0; i < n; ++i, ++k)
		cout << Prime[i] << (i == n - 1 || k % 10 == 9 ? '\n' : ' ');

	system("pause");
	return 0;
}