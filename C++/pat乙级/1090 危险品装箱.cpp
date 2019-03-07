#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

string Incompicable[10005][2];
string list[1005];

int main()
{
	int k, N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> Incompicable[i][0] >> Incompicable[i][1];
	}

	while (M--)
	{
		bool judge = false;
		memset(list, '\0', sizeof(list));
		cin >> k;

		for (int i = 0; i < k; i++)
		{
			cin >> list[i];
		}

		for (int i = 0; i < N && !judge; i++)
		{
			for (int j = 0; j < k && !judge; j++)
			{
				if (list[j] == Incompicable[i][0])
				{
					for (int z = 0; z < k && !judge; z++)
					{
						if (list[z] == Incompicable[i][1])
						{
							judge = true;
						}
					}
				}
			}
		}

		if (judge)
		{
			cout << "No\n";
		}
		else
		{
			cout << "Yes\n";
		}
	}

	system("pause");
	return 0;
}