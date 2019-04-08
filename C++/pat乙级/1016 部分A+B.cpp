#include <iostream>

using namespace std;

int main()
{
	string a, b;
	int Da, Db, Pa = 0, Pb = 0;
	cin >> a >> Da >> b >> Db;

	for (int i = 0; i < a.size(); ++i)
		if (a[i] - '0' == Da)
			Pa = Pa * 10 + Da;

	for (int i = 0; i < b.size(); ++i)
		if (b[i] - '0' == Db)
			Pb = Pb * 10 + Db;

	cout << Pa + Pb << endl;

	return 0;
}
