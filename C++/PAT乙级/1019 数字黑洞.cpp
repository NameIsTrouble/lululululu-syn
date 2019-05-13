#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

bool cmp(char a, char b)
{
	return a > b;
}

int main()
{
	int x;
	cin >> x;

	do
	{
		string t1, t2;
		t1 = t2 = to_string(x);

		sort(t1.begin(), t1.end(), cmp);
		sort(t2.begin(), t2.end());

		t1.append(4 - t1.size(), '0');	//补后导零
		t2.insert(0, 4 - t2.size(), '0'); //补前导零

		cout << t1 << " - " << t2 << " = ";

		x = stoi(t1) - stoi(t2);

		cout << setw(4) << setfill('0') << x << endl;
	} while (x != 6174 && x);

	return 0;
}