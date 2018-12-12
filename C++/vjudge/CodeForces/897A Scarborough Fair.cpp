#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	string test;
	cin >> test;
	for (int i = 0; i < m; i++)
	{
		int l, r,len=test.size();
		char c1, c2;
		cin >> l >> r >> c1 >> c2;
		for(int j=l-1;j<r;j++)
		{
			if(test[j]==c1)
			{
				test[j]=c2;
			}
		}
	}
	cout<<test<<endl;
	//system("pause");
	return 0;
}