#include <iostream>
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
}