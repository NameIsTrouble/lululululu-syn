#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
	string name;
	string id;
	int score;
} stu[10005];

bool cmp(student a, student b)
{
	return a.score > b.score;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> stu[i].name >> stu[i].id >> stu[i].score;

	sort(stu, stu + n, cmp);

	cout << stu[0].name << " " << stu[0].id << endl;
	cout << stu[n - 1].name << " " << stu[n - 1].id << endl;

	return 0;
}