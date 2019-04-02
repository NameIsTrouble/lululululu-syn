#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	string a, b;
	long long int Da, Db, Pa = 0, Pb = 0, ca = 1, cb = 1;
	cin >> a >> Da >> b >> Db;

	for (int i = 0; i < a.size(); i++)
		if (a[i] - '0' == Da)
		{
			Pa += Da * pow(10, ca - 1);
			ca++;
		}

	for (int i = 0; i < b.size(); i++)
		if (b[i] - '0' == Db)
		{
			Pb += Db * pow(10, cb - 1);
			cb++;
		}

	cout << Pa + Pb << endl;
	return 0;
}
