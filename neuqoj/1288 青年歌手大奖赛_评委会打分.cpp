//WA
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n,a[1000];
	while(getchar()!='\n')
	{
		cin>>n;
		a[1000]={0};
		double sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<fixed<<setprecision(2)<<sum/n<<endl;
	}
	return 0;
}
