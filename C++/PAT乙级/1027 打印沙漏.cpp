#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	char ch;
	cin >> n >> ch;

	int l = sqrt((n + 1) / 2), sum = l * l * 2 - 1;

	for (int i = 0; i < l; ++i)
	{
		string temp;
		temp.append(i, ' ');
		temp.append(2 * (l - i) - 1, ch);
		cout << temp << endl;
	}

	for (int i = 1; i < l; ++i)
	{
		string temp;
		temp.append(l - i - 1, ' ');
		temp.append(2 * i + 1, ch);
		cout << temp << endl;
	}

	cout << n - sum << endl;

	return 0;
}