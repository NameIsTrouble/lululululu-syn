#include<iostream>
using namespace std;
int f(int n)
{
    int s=n;
    while(s >= 10)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n / 10;
        }
        s=sum;
        n=sum;
    }
    return s;
}
int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int l, r, k, count = 0;
        cin >> l >> r >> k;

        for(int i = l; i <= r; i++)
        {
            if(f(i) == k||i==k)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    system("pause");
    return 0;
}