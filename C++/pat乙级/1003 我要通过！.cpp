/*
	这道题要注意P T两边和中间A的数量的关系
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int sub_in_P, sub_in_T; //记录PT的下标
		string temp;
		cin >> temp;
		bool p_flag = false, t_flag = false, flag = false; //判断是否符合要求

		for (int i = 0; i < temp.size(); ++i)
		{
			if (temp[i] == 'P')
			{
				if (!p_flag && !t_flag) //当第一次出现P 且没有出现T
				{
					p_flag = true;
					sub_in_P = i;
				}
				else if (p_flag || t_flag) //已经出现P 或已经出现T
				{
					flag = true;
					break;
				}
			}
			else if (temp[i] == 'T')
			{
				if (p_flag && !t_flag) //第一次出现T 且已经出现P
				{
					t_flag = true;
					sub_in_T = i;
				}
				else if (!p_flag || t_flag) //没有出现P 或已经出现T
				{
					flag = true;
					break;
				}
			}
			else if (temp[i] != 'A') //判断是否有非法字符
			{
				flag = true;
				break;
			}
		}

		if (flag) //如果不合要求 输出NO
		{
			cout << "NO\n";
			continue;
		}
		else
		{
			bool judge;
			int x;
			if (sub_in_P)//当P前有A时
				if (sub_in_P == temp.size() - sub_in_T - 1 || (temp.size() - sub_in_T - 1) % sub_in_P == 0) //T后的A的数量必须等于或能够乘除P前A的数量
				{
					judge = true;
					x = (temp.size() - sub_in_T - 1) / sub_in_P; //PT之间的A的数量必须为x
				}
				else
					judge = false;
			else if (sub_in_P == temp.size() - sub_in_T - 1) //当P前没有A时 T后也不能有A
				judge = true;
			else
				judge = false;
			if (judge && !sub_in_P ? sub_in_T - sub_in_P > 1 : sub_in_T - sub_in_P - 1 == x) //当P前A的数量为0时 PT之间的A的数量可以取大于1的任意值 当P前A的数量不为0时 必须满足PT之间A的数量==T后A的数量/P前A的数量
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	system("pause");
	return 0;
}