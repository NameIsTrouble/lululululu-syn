#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int minn[10], maxx[10], n,i,j;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d%d", &minn[i], &maxx[i]);
    }
    i=min(maxx[0],n-minn[1]-minn[2]);
    j=min(maxx[1],n-i-minn[2]);
    printf("%d %d %d\n",i,j,n-i-j);
    system("pause");
    return 0;
}