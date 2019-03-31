#include <iostream>

using namespace std;

int main()
{
	bool flag = false;
	int x, y;

	while (1)
	{
		x = 0, y = 0;
		cin >> x >> y;

		if (!y)
		{
			if (!flag)
				cout << "0 0";
			break;
		}
		else if (!flag)
		{
			cout << x * y << " " << y - 1;
			flag = true;
		}
		else
			cout << " " << x * y << " " << y - 1;
	}

	return 0;
}
