#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double m,n,i;
	n=1;
	for(i=n;n<=30;n++)
	{
		i*=n;
		m+=i;
	}
	cout<<setprecision(3)<<m<<endl;
	return 0;
 } 
