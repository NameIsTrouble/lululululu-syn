#include <iostream>

using namespace std;

int main()
{
	int C1, C2;
	scanf("%d%d", &C1, &C2);
	int seconds = (C2 - C1) / 100;
	int test = (C2 - C1) % 100;

	if (test >= 50)
		seconds++;

	int hours = seconds / 3600;
	seconds %= 3600;
	int minutes = seconds / 60;
	seconds %= 60;

	printf("%02d:%02d:%02d", hours, minutes, seconds);

	return 0;
}
