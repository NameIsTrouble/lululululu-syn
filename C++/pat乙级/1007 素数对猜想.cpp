#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<int> Prime;
bool IsPrime[100005];

void GetPrime(int n)
{
	for (int i = 2; i <= n; ++i)
		if (IsPrime[i])
		{
			for (int j = i + i; j < n; j += i)
				IsPrime[j] = false;

			Prime.push_back(i);
		}
}

int main()
{
	int n;
	cin >> n;

	memset(IsPrime, true, sizeof(IsPrime));

	GetPrime(n);
	int cnt = 0;

	for (int i = 1; i < Prime.size(); ++i)
		if (Prime[i] - Prime[i - 1] == 2)
			cnt++;

	cout << cnt << endl;

	return 0;
}