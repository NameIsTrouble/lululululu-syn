/*#include<iostream>
using namespace std;
 int main()
 {
	int a[3],sum[100],count=0;int dom;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[j];
			count++;
			sum[i]=a[0]+a[1];
		}
	//	if(sum[i]==0)
	//	{
	//		dom=1;
	//	}
	}
	for(int i=0;i<count-1;i++)
	{
		cout<<sum[i]<<endl;
	}
	return 0;
 }*/
 
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
	    if(a==0&&b==0)
	    {
	        exit(0);
	    }
	    else
	    {
	        cout<<a+b<<endl;
	    }
    }
    return 0;
} 