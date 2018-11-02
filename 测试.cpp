/*#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 30;
int n;
vector<int> pile[maxn];
void find_block(int a, int &p, int &h)
{
	for (p = 0; p < n; p++)
		for (h = 0; h < pile[p].size(); h++)
			if (pile[p][h] == a)
				return;
}
void clear_above(int p, int h)
{
	for (int i = h + 1; i < pile[p].size(); i++)
	{
		int b = pile[p][i];
		pile[b].push_back(b);
	}
	pile[p].resize(h + 1);
}
void pile_onto(int p, int h, int p2)
{
	for (int i = h; i < pile[p].size(); i++)
	{
		pile[p2].push_back(pile[p][i]);
	}
	pile[p].resize(h);
}
void print()
{
	for (int i = 0; i < n; i++)
	{
		printf("%d:", i);
		for (int j = 0; j < pile[i].size(); j++)
			printf(" %d", pile[i][j]);
		printf("\n");
	}
}
int main()
{
	int a, b;
	cin >> n;
	string s1, s2;
	for (int i = 0; i < n; i++)
		pile[i].push_back(i);
	while (cin >> s1 >> a >> s2 >> b)
	{
		int pa, pb, ha, hb;
		find_block(a, pa, ha);
		find_block(b, pb, hb);
		if (pa == pb)
			continue;
		if (s2 == "onto")
			clear_above(pb, hb);
		if (s1 == "move")
			clear_above(pa, ha);
		pile_onto(pa, ha, pb);
	}
	print();
	return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	
	system("pause");
	return 0;
}
*/
/*#include <iostream>
using namespace std;
int tts(int x)
{
	int sum16 = 0;
	while (x != 0)
	{
		sum16 += x % 16;
		x /= 16;
	}
	return sum16;
}
int ttt(int x)
{
	int sum12 = 0;
	while (x != 0)
	{
		sum12 += x % 12;
		x /= 12;
	}
	return sum12;
}
int t(int x)
{
	int sum10 = 0;
	while (x != 0)
	{
		sum10 += x % 10;
		x /= 10;
	}
	return sum10;
}
bool is(int x)
{
	int sum10 = 0, sum12 = 0, sum16 = 0;
	sum10=t(x);
	sum16=tts(x);
	sum12=ttt(x);
	if (sum10 == sum12 && sum12 == sum16)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	for (int i = 2992; i <= 9999; i++)
	{
		if (is(i) == true)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_menu();
void add(int a, int b);
void sub(int a, int b);

int main()
{
	unsigned long seed;
	seed = time(NULL);
	srand(seed); //

	//Todo 1：菜单输出

	int choice;

Start:
	system("cls");
	print_menu();

	scanf("%d", &choice);

	//Todo 2：根据输入进入指定功能
	int x, y;

	x = rand() % 21 + 1;
	y = rand() % 21 + 1;

	switch (choice)
	{
	case 1: //加法
		add(x, y);

		goto Start;
		break;

	case 2: //减法
		sub(x, y);
		goto Start;
		break;
	case 0: //退出 --
		printf("本程序正在退出...... Done.\n");
		break;
	default: //输入错误，请重输
		printf("选择输入错误，请重新选择.\n");
		goto Start;
	}

	return 0;
}

void print_menu()
{
	printf("========================================\n");
	printf("======欢迎进入加减法测试系统============\n");
	printf("======1-----加法========================\n");
	printf("======2-----减法========================\n");
	printf("======0-----退出========================\n");
	printf("========================================\n");
	printf("请输入您的选择:  ");
}

void add(int a, int b)
{
	int input_result;
	int result;

	result = a + b;
	printf("%d + %d  = ", a, b);
	scanf("%d", &input_result);

	if (input_result == result)
	{
		printf("  √\n");
	}
	else
	{
		printf("  ×\n");
	}

	printf("\n\n按任意键返回主菜单......");

	char ch;
	ch = getchar();

	return;
}

void sub(int a, int b)
{
	int input_result;
	int result;

	//如果a<b，交换a和b
	if (a < b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	result = a - b; //计算a-b
	printf("%d - %d  = ", a, b);
	scanf("%d", &input_result); //接收用户输入

	if (input_result == result)
	{
		printf("  √\n");
	}
	else
	{
		printf("  ×\n");
	}

	printf("\n\n按任意键返回主菜单......");

	char ch;
	ch = getchar();

	return;
}
