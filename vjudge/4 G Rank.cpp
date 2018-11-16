#include<iostream>
#include<algorithm>
using namespace std;
struct students
{
    string id;
    int sco;
}stu[1000000];
int main()
{
    string id;
    int i=0;
    scanf("%s",&id);
    while(scanf("%s %d",&stu[i].id,&stu[i].sco)&&(stu[i].id!=0&&stu[i].sco!=0))
    {
        i++;
    }
    sort(stu,stu+i,cmp);
}