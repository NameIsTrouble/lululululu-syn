#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char c[82];
    gets(c+1);
    c[0] = ' ';
    for(int i=strlen(c);i>=0;i--)
	{
        if(c[i] == ' ')
		{
            cout<<c+i+1;
            c[i] = '\0';
            if(i == 0)
			{
                cout<<endl;
            }
            else
			{
                cout<<' ';
            }
        }
        else
		{
            continue;
        }
    }
	return 0;
}
