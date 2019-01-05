#include <bits/stdc++.h>
using namespace std;
struct object
{
    int n;
    int line[6];
    int value;
};
bool judge[9];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        object m[9];
        m[0].n = 3;
        m[1].n = 4;
        m[2].n = 6;
        m[3].n = 4;
        m[4].n = 4;
        m[5].n = 6;
        m[6].n = 4;
        m[7].n = 3;
        m[0].line[0] = 1;
        m[0].line[1] = 2;
        m[0].line[2] = 3;
        m[1].line[0] = 0;
        m[1].line[1] = 2;
        m[1].line[2] = 4;
        m[1].line[3] = 5;
        m[2].line[0] = 0;
        m[2].line[1] = 1;
        m[2].line[2] = 3;
        m[2].line[3] = 4;
        m[2].line[4] = 5;
        m[2].line[5] = 6;
        m[3].line[0] = 0;
        m[3].line[1] = 2;
        m[3].line[2] = 5;
        m[3].line[3] = 6;
        m[4].line[0] = 1;
        m[4].line[1] = 2;
        m[4].line[2] = 5;
        m[4].line[3] = 7;
        m[5].line[0] = 1;
        m[5].line[1] = 2;
        m[5].line[2] = 3;
        m[5].line[3] = 4;
        m[5].line[4] = 6;
        m[5].line[5] = 7;
        m[6].line[0] = 2;
        m[6].line[1] = 3;
        m[6].line[2] = 5;
        m[6].line[3] = 7;
        m[7].line[0] = 4;
        m[7].line[1] = 5;
        m[7].line[2] = 6;
        int first=1;
        memset(judge,true,sizeof(judge));
        int fn=0;
        for (int i = 0; i < 8; i++)
        {
            int x;
            cin >> x;
            m[i].value=x;
            judge[x]=false;
            if(x&&first)
            {
                fn=i;
                first=0;
            }
        }
        
    }
}