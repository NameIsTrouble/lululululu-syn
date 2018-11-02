#include<iostream>
using namespace std;
int main()
{
  int n,x,y;
  while(1)
  {
    cin>>x>>y;
    if(!y)
    {
      break;
    }
    cout<<x+y<<endl;
  }
  system("pause");
  return 0;
}