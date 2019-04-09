#include <iostream>

using namespace std;

struct node
{
	int numJ = 0, numC = 0, numB = 0, V = 0, D = 0;
} a, b;

char ans[3] = {'B', 'C', 'J'};

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		char t1, t2;
		cin >> t1 >> t2;

		if ((t1 == 'J' && t2 == 'B'))
			a.V++, a.numJ++;
		else if ((t1 == 'B' && t2 == 'C'))
			a.V++, a.numB++;
		else if ((t1 == 'C' && t2 == 'J'))
			a.V++, a.numC++;
		else if ((t2 == 'J' && t1 == 'B'))
			a.D++, b.numJ++;
		else if ((t2 == 'B' && t1 == 'C'))
			a.D++, b.numB++;
		else if ((t2 == 'C' && t1 == 'J'))
			a.D++, b.numC++;
	}

	cout << a.V << " " << N - a.V - a.D << " " << a.D << endl
		 << a.D << " " << N - a.V - a.D << " " << a.V << endl;

	int index = a.numB < a.numC ? 1 : 0;

	if (index)
		index = a.numC < a.numJ ? 2 : 1;
	else
		index = a.numB < a.numJ ? 2 : 0;

	cout << ans[index] << ' ';

	index = b.numB < b.numC ? 1 : 0;

	if (index)
		index = b.numC < b.numJ ? 2 : 1;
	else
		index = b.numB < b.numJ ? 2 : 0;

	cout << ans[index] << endl;

	return 0;
}