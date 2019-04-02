#include <iostream>

using namespace std;

int main()
{
	long long int A, B, C, D;
	int a[10000] = {0};
	scanf("%d%d%d", &A, &B, &D);
	C = A + B;
	int i = 0;

	while (1)
	{
		a[i] = C % D;
		C /= D;
		i++;
		if (C == 0)
			break;
	}

	for (int j = i - 1; j >= 0; j--)
		printf("%d", a[j]);

	return 0;
}
