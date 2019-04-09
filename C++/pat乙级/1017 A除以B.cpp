/*
    注意特判输出字符串只有一位的情况
*/
#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    string A, Q;
    int B, R = 0;
    cin >> A >> B;

    for (int i = 0; i < A.size(); ++i)
    {
        Q.push_back(((A[i] - '0' + 10 * R) / B) + '0');
        R = (A[i] - '0' + 10 * R) % B;
    }

    for (int i = 0; i < Q.size(); ++i)
        if (!(!i && Q[i] == '0') || Q.size() == 1)
            cout << Q[i];

    cout << " " << R << endl;

    return 0;
}