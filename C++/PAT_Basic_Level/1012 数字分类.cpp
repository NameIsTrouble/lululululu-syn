#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, num[1000];
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> num[i];

	int sumA1 = 0, sumA2 = 0, sumA4 = 0, cntA3 = 0, cntA4 = 0;
	bool A2 = false;
	int sign = 1, max = 0;

	for (int i = 0; i < N; i++)
	{
		if (num[i] % 5 == 0 && num[i] % 2 == 0)
			sumA1 += num[i];
		else if (num[i] % 5 == 1)
		{
			A2 = true;
			sumA2 += num[i] * sign;
			sign *= -1;
		}
		else if (num[i] % 5 == 2)
			cntA3++;
		else if (num[i] % 5 == 3)
		{
			sumA4 += num[i];
			cntA4++;
		}
		else if (num[i] % 5 == 4)
			if (max < num[i])
				max = num[i];
	}
	
	if (sumA1)
		cout << sumA1;
	else
		cout << 'N';
	if (A2)
		cout << ' ' << sumA2;
	else
		cout << ' ' << 'N';
	if (cntA3)
		cout << ' ' << cntA3;
	else
		cout << ' ' << 'N';
	if (cntA4)
		cout << ' ' << setiosflags(ios::fixed) << setprecision(1) << sumA4 * 1.0 / cntA4;
	else
		cout << ' ' << 'N';
	if (max)
		cout << ' ' << max;
	else
		cout << ' ' << 'N';

	return 0;
}
