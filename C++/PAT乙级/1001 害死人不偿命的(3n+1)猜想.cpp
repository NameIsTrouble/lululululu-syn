#include <iostream>
using namespace std;
int main()
{
	int count = 0, n;
	cin >> n;
	for (int i = 1; n != 1; i++)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (3 * n + 1) / 2;
		}
		count = i;
	}
	cout << count << endl;
	system("pause");
	return 0;
}
