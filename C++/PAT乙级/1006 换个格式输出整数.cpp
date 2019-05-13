#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x;
	cin >> x;

	string num = to_string(x);

	reverse(num.begin(), num.end());

	num.append(3 - num.size(), '0');

	reverse(num.begin(), num.end());

	for (int i = 0; i < num[0] - '0'; ++i)
		cout << 'B';
	
	for (int i = 0; i < num[1] - '0'; ++i)
		cout << 'S';
	
	for (int i = 1; i <= num[2] - '0'; ++i)
		cout << i;
	
	cout << endl;

	return 0;
}