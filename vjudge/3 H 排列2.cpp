#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int a[5], count, l;
    int ca[1000][5];
    for (int i = 0;; i++)
    {
        scanf("%d %d %d %d", &ca[i][0], &ca[i][1], &ca[i][2], &ca[i][3]);
        if ((ca[i][0] + ca[i][1] + ca[i][2] + ca[i][3]) == 0)
        {
            break;
        }
        count = i + 1;
        l = count;
    }
    for (int q = 0; q < count; q++) /*
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] && (a[1] + a[0] + a[2] + a[3]) != 0)*/
    {
        a[0] = ca[q][0];
        a[1] = ca[q][1];
        a[2] = ca[q][2];
        a[3] = ca[q][3];
        int prf[25], c = 0;
        int flag[10010] = {0};
        bool ff = 0;
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 3; j >= 0; j--)
            {
                if (j == i)
                {
                    continue;
                }
                for (int v = 3; v >= 0; v--)
                {
                    if (v == i || v == j)
                    {
                        continue;
                    }
                    prf[c] = a[0] * pow(10, i) + a[1] * pow(10, j) + a[2] * pow(10, v) + a[3] * pow(10, 6 - i - j - v);
                    if (prf[c] > 999)
                    {
                        c++;
                    }
                    else if (i == 0 && v == 2 && j == 1)
                    {
                        c--;
                    }
                }
            }
        }
        sort(prf, prf + c);
        int w=0,ppt[25];
        for(int i=0;i<c;i++)
        {
            flag[prf[i]]+=1;
            if(flag[prf[i]]==1)
            {
                ppt[w]=prf[i];
                w++;
            }
        }
        ppt[w] = 10000;
        int first = ppt[0];
        for (int i = 0; i < w; i++)
        {
            /*flag[prf[i]] += 1;
            if (flag[prf[i]] == 1)
            {*/
                printf("%d", ppt[i]);
                first = ppt[i];
            
            if ((first / 1000) != (ppt[i + 1] / 1000)/*&&(first / 1000) != (prf[i + 2] / 1000)*/)
            {
                printf("\n");
            }
            //if (flag[prf[i]] == 1 && (first / 1000) == (prf[i + 1] / 1000)&&(first / 1000) == (prf[i + 2] / 1000))
            else
                printf(" ");
        }
        if (q != count - 1)
        {
            printf("\n");
        }
    }
    system("pause");
    return 0;
}