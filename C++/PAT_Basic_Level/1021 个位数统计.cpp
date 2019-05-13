#include <iostream>

using namespace std;

string N;
int cnt[10] = {0};

int main()
{
	cin >> N;

	for (auto &i : N)
		cnt[i - '0']++;

	for (int i = 0; i < 10; i++)
		if (cnt[i])
			cout << i << ":" << cnt[i] << endl;

	return 0;
}