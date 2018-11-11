# ACM集训队选拔2
## A
- AC
>
```C++
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	string test;
	cin >> test;
	for (int i = 0; i < m; i++)
	{
		int l, r,len=test.size();
		char c1, c2;
		cin >> l >> r >> c1 >> c2;
		for(int j=l-1;j<r;j++)
		{
			if(test[j]==c1)
			{
				test[j]=c2;
			}
		}
	}
	cout<<test<<endl;
	//system("pause");
	return 0;
}
```
## B
- AC C
>
```C++
#include <iostream>
#include<string>
using namespace std;
int main()
{
	long long int n, k,a[5],s;
	a[0]=0;
	cin>>n>>a[1]>>a[2]>>a[3];
	k=n%4;
	if(k==0)
	{
		s=0;
	}
	else if(k==3)
	{
		if(a[1]<=a[2]+a[3]&&a[1]<=3*a[3])
		{
			s=a[1];
		}
		else if(a[2]<=2*a[3])
		{
			s=a[2]+a[3];
		}
		else 
		{
			s=3*a[3];
		}
	}
	else if(k==2)
	{
		if(a[2]>=2*a[1]&&2*a[1]<=2*a[3])
		{
			s=2*a[1];
		}
		else if(a[2]<=2*a[3])
		{
			s=a[2];
		}
		else 
		{
			s=2*a[3];
		}
	}
	else if(k==1)
	{
		if(3*a[1]<=a[1]+a[2]&&a[3]>=3*a[1])
		{
			s=3*a[1];
		}
		else if(a[3]>a[1]+a[2])
		{
			s=a[1]+a[2];
		}
		else
		{
			s=a[3];
		}
	}
	cout<<s<<endl;
	//system("pause");
	return 0;
}
```
## C
- AC
>
```C++
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, flag = 0, max;
	cin >> a >> b >> c;
	for (int i = a; i >= 0; i--)
	{
		if (2 * i <= b && 4 * i <= c)
		{
			max = 7 * i;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		cout << max << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	//system("pause");
	return 0;
}
```
## D
- AC C
>
```C++
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	long long int ab,ac,bc,mi,ma;
	ab=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
	ac=(ax-cx)*(ax-cx)+(ay-cy)*(ay-cy);
	bc=(cx-bx)*(cx-bx)+(cy-by)*(cy-by);
	if(ab!=bc)
	{
		cout<<"No"<<endl;
	}
	else if((bx-cx)*(ay-by)==(ax-bx)*(by-cy))
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}
	//system("pause");
	return 0;
}
```
## E
- AC
>
```C++
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int n;
	long long int a[100100];
	int last=0,l=1,max=0,flag=1,flag2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		{
			l++;
			
		}
		else
		{
			if(max<l)
			{
				max=l;
			}
			l=1;
		}
	}
	if(l>max)
	{
		max=l;
	}
	cout<<max<<endl;
	//system("pause");
	return 0;
}
```
## F
- AC
>
```C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int a, b, sum = 1, s;
	cin >> a >> b;
	if (a == b)
	{
		cout << 1 << endl;
	}
	else
	{
		long long int c = b - a;
		if(c>=10)
		{
			printf("0\n");
			return 0;
		}
		for (long long i = a + 1; i <= b; i++)
		{

			s = i;
			s %= 10;
			sum *= s;
			sum %= 10;
		}
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}
```
