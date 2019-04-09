#include <iostream>

using namespace std;

bool cmp(char x, char y)
{
	if ((x == 'J' && y == 'B') || (x == 'B' && y == 'C') || (x == 'C' && y == 'J'))
		return true;
	else
		return false;
}

struct node
{
	int numJ, numC, numB;
};

int main()
{
	int N;
	cin >> N;

	while (N--)
	{
		char a, b;
		cin >> a >> b;

		if (a == b)


	}

	return 0;
}