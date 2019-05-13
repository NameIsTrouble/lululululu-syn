#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int M=1000+5;
struct Date
{
    string Y;
    string M;
    string D;
    string s;
     
 }str[M];
int cmp(Date str1, Date str2)
{
    if(str1.Y!=str2.Y)
    return str1.Y<str2.Y;
    if(str1.M!=str2.M)
    return str1.M<str2.M;
    if(str1.D!=str2.D)
    return str1.D<str2.D;
}
int main()
{
    int i=0;
    while(getline(cin,str[i].s))
    {
        string c=str[i].s;
        str[i].Y=&c[6];
        str[i].M[0]=c[0],str[i].M[1]=c[1];
        str[i].D[0]=c[3],str[i].D[1]=c[4];
        i++;
    }
    sort(str,str+i,cmp);
    for(int j=0;j<i;j++)
    {
        cout<<str[j].s<<endl;
    }
    return 0;
}