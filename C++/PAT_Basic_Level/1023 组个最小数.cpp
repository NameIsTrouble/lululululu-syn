#include <iostream>
#include <algorithm>

using namespace std;

int n[10];
string str;

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cin >> n[i];
		if (i && n[i] && !str.size())
		{
			str.push_back(i + '0');
			--n[i];
		}
	}

	for (int i = 0; i < 10; ++i)
		str.append(n[i], i + '0');
	
	cout << str << endl;	
	
	return 0;
}