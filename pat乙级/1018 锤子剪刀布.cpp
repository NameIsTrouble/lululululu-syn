#include<iostream>
using namespace std;
char cmp_win(char x,char y)
{
	if(x==y)
	{
		return 'P';	
	}
	else if(x=='J'&&y=='B')
	{
		return 'J';
	}
	else if(x=='B'&&y=='C')
	{
		return 'B';
	}
	else if(x=='C'&&y=='J')
	{
		return 'C';
	}
	else
	{
		return 0;
	}
}
char cmp_lose(char x,char y)
{
	if(x=='B'&&y=='J')
	{
		return 'J';
	}
	else if(x=='C'&&y=='B')
	{
		return 'B';
	}
	else if(x=='J'&&y=='C')
	{
		return 'C';
	}
	else
	{
		return 0;
	}
}
int main()
{
	long long int n,np=0,njw=0,nbw=0,ncw=0,njl=0,nbl=0,ncl=0,maxa,maxb;
	char x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y;
		switch(cmp_win(x,y))
		{
			case'P':np++;break;
			case'J':njw++;break;
			case'B':nbw++;break;
			case'C':ncw++;break;
		}
		switch(cmp_lose(x,y))
		{
			case'B':nbl++;break;
			case'C':ncl++;break;
			case'J':njl++;break;
		}
	}
	cout<<njw+nbw+ncw<<' '<<np<<' '<<n-np-njw-ncw-nbw<<endl;
	cout<<n-np-njw-ncw-nbw<<' '<<np<<' '<<njw+nbw+ncw<<endl;
	if(((nbw>=ncw?nbw:ncw)>=njw?(nbw>=ncw?nbw:ncw):njw)==nbw)
	{
		maxa=1;
	}
	else if(((nbw>=ncw?nbw:ncw)>=njw?(nbw>=ncw?nbw:ncw):njw)==ncw)
	{
		maxa=2;
	}
	else
	{
		maxa=3;
	}
	if(((nbl>=ncl?nbl:ncl)>=njl?(nbl>=ncl?nbl:ncl):njl)==nbl)
	{
		maxb=1;
	}
	else if(((nbl>=ncl?nbl:ncl)>=njl?(nbl>=ncl?nbl:ncl):njl)==ncl)
	{
		maxb=2;
	}
	else
	{
		maxb=3;
	}
	switch(maxa)
	{
		case 1:cout<<'B'<<' ';break;
		case 2:cout<<'C'<<' ';break;
		case 3:cout<<'J'<<' ';break;
	}
	switch(maxb)
	{
		case 1:cout<<'B';break;
		case 2:cout<<'C';break;
		case 3:cout<<'J';break;
	}
	return 0;
}
