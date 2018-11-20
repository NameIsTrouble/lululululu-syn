#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        int n,test[11];
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&test[j]);
        }
        sort(test,test+n);
        printf("%d\n",test[1]);
    }
    system("pause");
    return 0;
}