#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	long long int ab,ac,bc,mi,ma;
	ab=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
	ac=(ax-cx)*(ax-cx)+(ay-cy)*(ay-cy);
	bc=(cx-bx)*(cx-bx)+(cy-by)*(cy-by);
	if(ab!=bc)
	{
		cout<<"No"<<endl;
	}
	else if((bx-cx)*(ay-by)==(ax-bx)*(by-cy))
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}
	//system("pause");
	return 0;
}