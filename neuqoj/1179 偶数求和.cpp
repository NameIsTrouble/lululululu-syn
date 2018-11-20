#include <iostream> 
using namespace std; 
int main()
{
    int n,m;
    int a;
    int sum,b;
    int count;    
    while(cin>>n>>m)
	{
        sum=0;b=0;count=0;a=1;    
        for(int i=0,j=1;i<n;i++,j++)
		{
            a=2*(i+1);
            sum+=a;
            if(j==m||i==n-1)
			{     
                b=sum/j;
                if(count!=0)cout<<" ";
                cout<<b;
                j=0;
                sum=0;
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}