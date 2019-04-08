#include <iostream>
#include <iomanip>

using namespace std;

string D[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	bool flag = false;

	for (int i = 0; i < (s1.size() < s2.size() ? s1.size() : s2.size()); ++i)
		if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G' && !flag)
		{
			cout << D[s1[i] - 'A'] << " ";
			flag = true;
		}
		else if (s1[i] == s2[i] && flag)
		{
			if (isdigit(s1[i]))
			{
				cout << 0 << s1[i] << ":";
				break;
			}
			else if (s1[i] >= 'A' && s1[i] <= 'N')
			{
				cout << (s1[i] - 'A' + 10) << ":";
				break;
			}
		}

	for (int i = 0; i < (s3.size() < s4.size() ? s3.size() : s4.size()); ++i)
		if (s3[i] == s4[i] && isalpha(s3[i]))
		{
			cout << setw(2) << setfill('0') << i << endl;
			break;
		}

	return 0;
}