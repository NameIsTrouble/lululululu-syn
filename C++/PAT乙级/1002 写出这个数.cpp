#include <iostream>

using namespace std;

string num[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
	string str;
	cin >> str;

	int sum = 0;

	for (int i = 0; i < str.size(); i++)
		sum += str[i] - '0';

	str = to_string(sum); // 将整形数据转换成字符串

	for (int i = 0; i < str.size(); i++)
		printf("%s%s", i ? " " : "", num[str[i] - '0'].c_str());

	cout << endl;

	return 0;
}
