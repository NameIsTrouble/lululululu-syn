#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2;
    char fau[1000];
    cin>>str1>>str2;
    int l=str1.size(),count=0;
    for(int i=0,j=0;i<l;i++)
    {
        if(str1[i]!=str2[j])
        {
            if(str1[i]>='a'&&str1[i]<='z')
            {
                fau[count]=str1[i]-'a'+'A';
            }
            else
            {
                fau[count]=str1[i];
            }
            count++;
            continue;
        }
        else
        {
            j++;
        }
    }
    for(int i=0;i<count;i++)
    {
        if(i==0)
        {
            cout<<fau[i];
        }
        for(int j=0;j<i,i>0;j++)
        {
            if(fau[i]==fau[j])
            {
                break;
            }
            else if(fau[i]!=fau[j]&&j==i-1)
            {
                cout<<fau[i];
            }
        }
    }
    system("pause");
    return 0;
}