#include <iostream>

using namespace std;

int main()
{
	string a, b;
	int Da, Db, Pa = 0, Pb = 0;
	cin >> a >> Da >> b >> Db;

	for (auto &it : a)
		if (it - '0' == Da)
			Pa = 10 * Pa + Da;

	for (auto &it : b)
		if (it - '0' == Db)
			Pb = 10 * Pb + Db;

	cout << Pa + Pb << endl;

	return 0;
}