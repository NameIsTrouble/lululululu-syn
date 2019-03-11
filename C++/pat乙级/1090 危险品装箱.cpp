#include <iostream>
#include <map>
#include <vector>
#include <string.h>

using namespace std;

bool vis[10000005];//判断货物是否出现
map<int, vector<int>> Inc;//记录不相容货物

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		Inc[a].push_back(b);//记录与a不相容的货物
		Inc[b].push_back(a);//记录与b不相容的货物
	}

	while (M--)
	{
		memset(vis, false, sizeof(vis));//初始化为false
		int k;
		bool judge = false;//判断是否能相容
		cin >> k;
		vector<int> temp(k);//要装箱的货物

		for (int i = 0; i < k; i++)
		{
			cin >> temp[i];
			vis[temp[i]] = true;//货物存在
		}

		for (int i = 0; i < temp.size(); i++)
		{
			/*遍历寻找不相容货物*/
			for (int j = 0; j < Inc[temp[i]].size(); j++)
			{
				if (vis[Inc[temp[i]][j]])
				{
					judge = true;
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