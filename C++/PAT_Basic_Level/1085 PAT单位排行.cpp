#include <iostream>
#include <unordered_map> //使用map会导致最后一个测试点超时
#include <algorithm>
#include <vector>

using namespace std;

/*学校的信息*/
struct node
{
    int BScore, AScore, TScore, TotalScore, Num, Rank;
    string school;
};

unordered_map<string, node> list; //学校
vector<node> ans;                 //整理后的学校

/*排序*/
bool cmp(node a, node b)
{
    if (a.TotalScore == b.TotalScore)
        if (a.Num == b.Num)
            return a.school < b.school;
        else
            return a.Num < b.Num;
    else
        return a.TotalScore > b.TotalScore;
}

int main()
{
    int n, ns = 0;
    cin >> n;

    while (n--)
    {
        string id, col;
        int sco;
        cin >> id >> sco >> col; //输入准考证号 成绩 学校

        /*将学校名称小写*/
        for (int i = 0; i < col.size(); i++)
            col[i] = tolower(col[i]);

        /*如果此前没有出现过该学校 那么在map里新建*/
        if (list.find(col) == list.end())
        {
            ns++;
            list[col].TotalScore = 0;
            list[col].AScore = 0;
            list[col].BScore = 0;
            list[col].Num = 0;
            list[col].TScore = 0;
            list[col].school = col;
        }

        /*按照考试类型加分*/
        switch (id[0])
        {
        case 'A':
            list[col].AScore += sco;
            break;
        case 'B':
            list[col].BScore += sco;
            break;
        case 'T':
            list[col].TScore += sco;
            break;
        }

        list[col].Num++; //学校人数增加
    }

    /*遍历map将学校总成绩算出 并插入到vector里*/
    for (unordered_map<string, node>::iterator i = list.begin(); i != list.end(); i++)
    {
        i->second.TotalScore = i->second.AScore + i->second.BScore / 1.5 + i->second.TScore * 1.5;
        ans.push_back(i->second);
    }

    sort(ans.begin(), ans.end(), cmp); //排序
    ans[0].Rank = 1;                   //设置第一个学校排名为1
    cout << ns << endl;                //输出数组里的学校总数

    /*遍历输出学校信息*/
    for (int i = 0; i < ns; i++)
        /*如果是第一个学校 则直接输出信息*/
        if (!i)
            cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl;
        /*如果不是第一个学校*/
        else
        {
            /*比较总成绩大小 如果相等 则排名与前一个学校相同*/
            if (ans[i].TotalScore == ans[i - 1].TotalScore)
            {
                ans[i].Rank = ans[i - 1].Rank;
                cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl;
            }
            /*否则计算排名*/
            else
            {
                ans[i].Rank = i + 1;
                cout << ans[i].Rank << " " << ans[i].school << " " << ans[i].TotalScore << " " << ans[i].Num << endl;
            }
        }

    system("pause");
    return 0;
}