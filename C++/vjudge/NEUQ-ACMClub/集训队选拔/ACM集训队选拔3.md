#ACM集训队选拔3
## A
>
```C++
```
## B
>
```C++
```
## C
>
```C++
```
## D
>
```C++
```
## E
- AC
>
```c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, x, y, xx, yy;
	cin >> r >> x >> y >> xx >> yy;
	double d = sqrt(pow(x - xx, 2) + pow(y - yy, 2));
	int n = 0;
	double l;
	if (d == 0)
	{
		n = 0;
	}
	else if (d <= 2 * r)
	{
		n = 1;
	}
	else
	{
		n = d / (2 * r) ;
		l=d-n*2*r;
		if(l!=0)
		{
			n+=1;
		}
		/*l = d % (2 * r);
		if (l > 0)
		{
			n += 1;
		}*/
	}
	printf("%d\n", n);
	//system("pause");
	return 0;
}
```
## F
>
```C++
```
