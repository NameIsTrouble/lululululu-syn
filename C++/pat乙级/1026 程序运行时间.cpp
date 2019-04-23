#include <iostream>

using namespace std;

int main()
{
	int C1, C2, seconds, minutes, hours;
	cin >> C1 >> C2;

	seconds = (C2 - C1 + 50) / 100;
	
	hours = seconds / 3600;
	seconds %= 3600;

	minutes = seconds / 60;
	seconds %= 60;

	printf("%02d:%02d:%02d", hours, minutes, seconds);

	return 0;
}