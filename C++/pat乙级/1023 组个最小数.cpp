#include <iostream>

using namespace std;

int main()
{
	int Num[10];

	for (int i = 0; i < 10; i++)
		scanf("%d", &Num[i]);

	for (int i = 1; i <= 9; i++)
		if (Num[i] != 0)
		{
			printf("%d", i);
			Num[i]--;
			break;
		}

	for (int i = 0; i <= 9; i++)
		if (Num[i] != 0)
			for (int j = 0; j < Num[i]; j++)
				printf("%d", i);

	return 0;
}
