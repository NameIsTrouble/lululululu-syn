#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		string a, b, ans;
		cin >> a >> b;
		cout << "Case " << i << ":\n"
			 << a << " + " << b << " = ";

		int l = (a.size() > b.size() ? a.size() : b.size());

		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		a.append(l - a.size(), '0');
		b.append(l - b.size(), '0');

		int temp = 0;

		for (int i = 0; i < l; ++i)
		{
			ans.push_back((temp + b[i] - '0' + a[i] - '0') % 10 + '0');
			temp = (temp + b[i] - '0' + a[i] - '0') / 10;
		}

		if (temp)
			ans.push_back(temp + '0');

		reverse(ans.begin(), ans.end());

		cout << ans << endl;
	}

	return 0;
}