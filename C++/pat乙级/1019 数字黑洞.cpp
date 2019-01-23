#include <iostream>
#include <algorithm>
#include <string.h>
#include <iomanip>

using namespace std;

int N;
/*从大到小排序*/
bool cmpdown(int a, int b)
{
	return a > b;
}
/*从小到大排序*/
bool cmpup(int a, int b)
{
	return a < b;
}
//获取各个位置上的数字
void make_digit(int *x, int y)
{
	for (int i = 0; y; i++)
	{
		x[i] = y % 10;
		y /= 10;
	}
}
/*判断是否是0*/
bool judge(int x[])
{
	if (x[0] == x[1] && x[0] == x[2] && x[0] == x[3] && x[1] == x[2] && x[1] == x[3] && x[2] == x[3])
	{
		return false;
	}
	else
		return true;
}

int digit[4];

int main()
{
	cin >> N;
	int first = N, second;
	memset(digit, 0, sizeof(digit));
	make_digit(digit, first);
	if (judge(digit))
	{
		while (true)
		{
			memset(digit, 0, sizeof(digit));
			make_digit(digit, first);
			sort(digit, digit + 4, cmpdown);
			first = 0, second = 0;
			for (int i = 0; i < 4; i++)
			{
				first *= 10;
				first += digit[i];
			}
			sort(digit, digit + 4, cmpup);
			for (int i = 0; i < 4; i++)
			{
				second *= 10;
				second += digit[i];
			}
			if (first - second == 6174)
			{
				sort(digit, digit + 4, cmpdown);
				for (int i = 0; i < 4; i++)
				{
					cout << digit[i];
				}
				cout << " - ";
				sort(digit, digit + 4, cmpup);
				for (int i = 0; i < 4; i++)
				{
					cout << digit[i];
				}
				cout << " = " << setfill('0') << setw(4) << first - second << endl;
				break;
			}
			else
			{
				sort(digit, digit + 4, cmpdown);
				for (int i = 0; i < 4; i++)
				{
					cout << digit[i];
				}
				cout << " - ";
				sort(digit, digit + 4, cmpup);
				for (int i = 0; i < 4; i++)
				{
					cout << digit[i];
				}
				cout << " = " << setfill('0') << setw(4) << first - second << endl;
				first = first - second;
			}
		}
	}
	else
	{
		sort(digit, digit + 4, cmpdown);
		for (int i = 0; i < 4; i++)
		{
			cout << digit[i];
		}
		cout << " - ";
		for (int i = 0; i < 4; i++)
		{
			cout << digit[i];
		}
		cout << " = 0000\n";
	}

	system("pause");
	return 0;
}