#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

/*分数*/
struct score
{
    string name;
    int OnlineScore, MidScore, FinalScore, G;
};

map<string, score> student; //分科成绩
vector<score> com;

/*排序*/
bool cmp(score a, score b)
{
    if (a.G == b.G)
        return a.name < b.name;
    else
        return a.G > b.G;
}

int main()
{
    int p, m, n;
    cin >> p >> m >> n;

    /*输入在线测试成绩*/
    while (p--)
    {
        string temp;
        int s;
        cin >> temp >> s;

        /*少于200的一定不合格*/
        if (s >= 200)
        {
            student[temp].name = temp;
            student[temp].OnlineScore = s;
            student[temp].MidScore = -1;
            student[temp].FinalScore = -1;
        }
    }

    /*输入期中成绩*/
    while (m--)
    {
        string temp;
        int s;
        cin >> temp >> s;

        /*如果没有在线成绩 一定不合格*/
        if (student.find(temp) != student.end())
            student[temp].MidScore = s;
    }

    /*输入期终成绩*/
    while (n--)
    {
        string temp;
        int s;
        cin >> temp >> s;

        /*没有在线成绩 一定不合格*/
        if (student.find(temp) != student.end())
            student[temp].FinalScore = s;
    }

    /*遍历判断是否合格*/
    for (map<string, score>::iterator it = student.begin(); it != student.end(); it++)
    {
        if (it->second.MidScore > it->second.FinalScore) //当期中成绩大于期终成绩时
            it->second.G = it->second.MidScore * 0.4 + it->second.FinalScore * 0.6 + 0.5;
        else //否则
            it->second.G = it->second.FinalScore;

        //当合格时 放入数组中等待排序
        if (it->second.G >= 60)
            com.push_back(it->second);
    }

    sort(com.begin(), com.end(), cmp); //排序

    /*遍历输出*/
    for (vector<score>::iterator i = com.begin(); i != com.end(); i++)
        cout << i->name << " " << i->OnlineScore << " " << i->MidScore << " " << i->FinalScore << " " << i->G << endl;

    system("pause");
    return 0;
}