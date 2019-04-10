#include <iostream>
#include <algorithm>

using namespace std;

string str;

int main()
{
	int A, B, D;
	cin >> A >> B >> D;

	int num = A + B;

	do
	{
		str.push_back(num % D + '0');
		num /= D;
	} while (num);

	reverse(str.begin(), str.end());

	cout << str << endl;

	return 0;
}