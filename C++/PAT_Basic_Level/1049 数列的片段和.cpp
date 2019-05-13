/*
    数学
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double ans = 0.0;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double x;
        cin >> x;
        ans += double(i + 1) * double(N - i) * x;
    }

    cout << fixed << setprecision(2) << ans << endl;
    
    system("pause");
    return 0;
}