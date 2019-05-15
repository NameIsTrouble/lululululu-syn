#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, ans = 0, lenTemp = 0;
    long long p;
    cin >> N >> p;

    int arr[N];

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; ++i)
        for (int j = i + lenTemp; j < N; ++j)
        {
            if (arr[i] * p >= arr[j])
                lenTemp = j - i + 1;
            else
                break;
            ans = max(ans, lenTemp);
        }

    cout << ans << endl;
    
    return 0;
}