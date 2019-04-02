#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string DAY[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int si1, si2, si3, si4;
	si1 = s1.length();
	si2 = s2.length();
	si3 = s3.length();
	si4 = s4.length();
	int i = 0;
	string en;

	for (; i < si1 && i < si2; ++i)
		if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
		{
			cout << DAY[s1[i] - 'A'];
			break;
		}

	++i;
	int hour;

	for (; i < si1 && i < si2; ++i)
		if (s1[i] == s2[i])
			if (s1[i] >= '0' && s1[i] <= '9')
			{
				hour = s1[i] - '0';
				cout << hour / 10 << hour % 10 << ":";
				break;
			}
			else if (s1[i] >= 'A' && s1[i] <= 'N')
			{
				hour = (s1[i] - 'A' + 10);
				cout << hour / 10 << hour % 10 << ":";
				break;
			}

	for (int i = 0; i < si3 && i < si4; ++i)
		if (s3[i] == s4[i])
			if ((s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z'))
			{
				cout << i / 10 << i % 10 << endl;
				break;
			}

	system("pause");
	return 0;
}
