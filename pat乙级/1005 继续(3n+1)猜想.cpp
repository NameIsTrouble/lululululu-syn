/*#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int n,test[10000],retest[10000],print[1000];
	for(int i=0;i<n;i++)
	{
		cin>>test[i];
	}
	sort(test,test+n,cmp);
	int j=0;
	for(int i=0;i<n;i++)
	{
		while(retest[j]!=1)
		{
			if(test[i]%2==0)
			{
				retest[j]=test[i]/2;
			}
			else
			{
				retest[j]=3*test[i]+1;
			}
			j++;
		}
	}
	int z=0;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int v=0;v<=j;v++)
		{
			if(test[i]==retest[v])
			{
				count++;
			}
		}
		if(count==0)
		{
			print[z]=test[i];
			z++;
		}
	}
	for(int i=0;i<z-1;i++)
	{
		cout<<print[i]<<' ';
	}
	cout<<print[z-1];
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
using namespace std;
int x[200] = {0};
int half(int a) {
    int count = 0;
    while (a > 1)
    {
        if (a % 2 == 1)
            a = (a * 3 + 1) / 2;
        else
            a /= 2;
        if (a < 200)x[a] = 0;  
    }
    return count;
}
int main() {
    int n, in;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        x[in] = 1;
    }
    for (int i = 101; i >= 0; i--) {
        if (x[i])half(i);
    }
    int flag = 1;
    for (int i = 101; i >= 0; i--) {
        if (x[i]) {
            if (flag) {        
                printf("%d", i); flag = 0;
            } 
            else {
                printf(" %d", i);
            }
        }
    }
    return 0;
}
