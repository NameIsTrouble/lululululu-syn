#include <iostream>
using namespace std;
int main()
{
	int a, b, c, flag = 0, max;
	cin >> a >> b >> c;
	for (int i = a; i >= 0; i--)
	{
		if (2 * i <= b && 4 * i <= c)
		{
			max = 7 * i;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << max << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	//system("pause");
	return 0;
}