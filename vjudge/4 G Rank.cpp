/*
    本题只需记录每种分数有多少人
    获得相应学生分数 即可得到排名
    无需排序
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct student
{
    string id;//身份
    int sco;//成绩
} stu[1000000];
int main()
{
    string id;
    while (cin >> id)//要找的人
    {
        int i = 0, score, sum[110] = {0};//score为要找的分数 sum为每种分数人数
        while (cin >> stu[i].id >> stu[i].sco)
        {
            if (stu[i].sco == 0 && stu[i].id == "0")//当id==0且score==0时跳出
            {
                break;
            }
            sum[stu[i].sco]++;
            if (stu[i].id == id)
            {
                score = stu[i].sco;//记录分数
            }
            i++;
        }
        int rank = 0;
        for (int j = 100; j > score; j--)
        {
            rank += sum[j];
        }
        cout << rank + 1 << endl;
    }
    system("pause");
    return 0;
}