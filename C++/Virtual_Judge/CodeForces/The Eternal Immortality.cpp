#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int a, b, sum = 1, s;
	cin >> a >> b;
	if (a == b)
	{
		cout << 1 << endl;
	}
	else
	{
		long long int c = b - a;
		if(c>=10)
		{
			printf("0\n");
			return 0;
		}
		for (long long i = a + 1; i <= b; i++)
		{

			s = i;
			s %= 10;
			sum *= s;
			sum %= 10;
		}
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}