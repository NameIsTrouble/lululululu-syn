#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, p;
    cin >> N >> p;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int len = N;

    for (int i = 0; i < N - len + 1; ++i)
        for (int j = i + len + 1; j < N; ++j)
            if (arr[j] <= arr[i] * p)
                len = j - i + 1;
            else
            {
                --len;
                break;
            }

    cout << len << endl;

    system("pause");
    return 0;
}