/*#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int Coe[1000],Exp[1000];
	int c,count=0;
	for(int i=0;;i++)
	{
		if(getchar()=='\n')
		{
			break;
		}
		cin>>Coe[i]>>Exp[i];
		Coe[i]*=Exp[i];
		if(Exp[i]==0)
		{
			break;
		}
		else
		{
			Exp[i]-=1;
		}
		count=i;
	}
	for(int i=0;i<count;i++)
	{
		cout<<Coe[i]<<' '<<Exp[i];
		if(Exp[i+1]!=-1)
		{
			cout<<' ';
		}
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main() 
{
	int num=0;
	int x,y;
	while(1) 
	{
		x=y=0;
		cin>>x>>y;
		num+=2;
		if(!y) 
		{
			if(num==2)
			{
				cout<<"0 0";
			}
			break;
		} 
		else
		{
		 	if(num==2) 
			{
				cout<<x*y<<" "<<y-1;
			}
			else 
			{
				cout<<" "<<x*y<<" "<<y-1;
			}
		}
	}
	return 0;
}



