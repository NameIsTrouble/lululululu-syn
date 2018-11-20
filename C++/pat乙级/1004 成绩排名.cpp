/*#include<iostream>
using namespace std;
int main()
{
	int max,min,score[1000];
	string name[1000],num[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>num[i]>>score[i]; 
	}
	max=0;
	min=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(score[i]<score[j])
			{
				max=j;
			}
			if(score[i]>score[j])
			{
				min=j;
			}
		}
	}
	cout<<name[max]<<' '<<num[max]<<endl;
	cout<<name[min]<<' '<<num[min]<<endl;
	return 0;
}*/
#include <cstdio>
struct student {
	char name[15];
	char id[15];
	int score;
}stu[10005];
 
int main() {
	int n, max = 0, min = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", stu[i].name);
		scanf("%s", stu[i].id);
		scanf("%d", &stu[i].score);
		if(stu[i].score > stu[max].score) max = i;
		if(stu[i].score < stu[min].score) min = i;
	}
	printf("%s %s\n", stu[max].name, stu[max].id);
	printf("%s %s\n", stu[min].name, stu[min].id);
	return 0;
}