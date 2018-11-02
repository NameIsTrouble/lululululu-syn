#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c;
	e=(d=a>b?a:b)>c?d:c;
    cout<<e;
	return 0;
} 
