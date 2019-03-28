#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

bool vis[10000] = {false}; //判断是否在验证过程中出现
int arr[10000];			   //记录待验证的数

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;

		while (temp != 1)
		{
			if (temp % 2)
				temp = temp * 3 + 1;
			temp /= 2;
			if (vis[temp])
				break;
			vis[temp] = true; //将出现的数标为true
		}
	}

	sort(arr, arr + n, cmp);

	bool flag = false;

	for (int i = 0; i < n; ++i)
		if (!vis[arr[i]])
		{
			if (!flag)
				cout << arr[i];
			else
				cout << " " << arr[i];
			flag = true;
		}

	return 0;
}
