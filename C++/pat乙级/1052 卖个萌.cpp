#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> face;

int main()
{
    string a;

    for (int i = 0; i < 3; ++i)
    {
        bool exifirst = false;
        int index_fir;
        getline(cin, a);

        vector<string> temp;

        for (int j = 0; j < a.size(); ++j)
            if (a[j] == '[' && !exifirst)
            {
                index_fir = j; // 标记[下标
                exifirst = true;
            }
            else if (a[j] == ']' && exifirst)
            {
                exifirst = false;
                temp.push_back(a.substr(index_fir + 1, j - index_fir - 1));
            }

        face.push_back(temp);
    }

    int K;
    cin >> K;

    while (K--)
    {
        int h1, e1, m, e2, h2;
        cin >> h1 >> e1 >> m >> e2 >> h2;

        if (h1 > face[0].size() || h2 > face[0].size() || e1 > face[1].size() || e2 > face[1].size() || m > face[2].size() || h1 < 1 || h2 < 1 || e1 < 1 || e2 < 1 || m < 1) // 不写h1 < 1 || h2 < 1 || e1 < 1 || e2 < 1 || m < 1会有段错误
            cout << "Are you kidding me? @\\/@\n";
        else
            cout << face[0][h1 - 1] << "(" << face[1][e1 - 1] << face[2][m - 1] << face[1][e2 - 1] << ")" << face[0][h2 - 1] << endl;
    }

    system("pause");
    return 0;
}