#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<int> primer;
bool isprimer[100005];

void GetPrimer(int n)
{
	for (int i = 2; i <= n; ++i)
		if (isprimer[i])
		{
			for (int j = i + i; j < n; j += i)
				isprimer[j] = false;

			primer.push_back(i);
		}
}

int main()
{
	int n;
	cin >> n;

	memset(isprimer, true, sizeof(isprimer));

	GetPrimer(n);
	int cnt = 0;

	for (int i = 1; i < primer.size(); ++i)
		if (primer[i] - primer[i - 1] == 2)
			cnt++;

	cout << cnt << endl;

	return 0;
}