#include<iostream>
using namespace std;
int main()
{
  int n,x[10000],y[10000];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<x[i]+y[i]<<endl;
  }
  return 0;
}