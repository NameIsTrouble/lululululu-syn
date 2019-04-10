#include <iostream>

using namespace std;

int ans[1000];

int main()
{

	int n, m;
	cin >> n >> m;
	m %= n;

	for (int i = 0; i < n; i++)
		cin >> ans[i];

	for (int i = n - m; i < n; ++i)
		for (int j = i; j > i - n + m; --j)
			swap(ans[j], ans[j - 1]);

	for (int i = 0; i < n; ++i)
		cout << ans[i] << (i == n - 1 ? '\n' : ' '); 

	return 0;
}
