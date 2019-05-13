#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	if(a>=10000&&a<99999){
		b=5;
	}
	else if(a>=1000&&a<9999){
		b=4;
	}
	else if(a>=100&&a<999){
		b=3;
	}
	else if(a>=10&&a<99){
		b=2;
	}
	else{
		b=1;
	}
	cout<<b<<endl;
	int c,d,e,f,g,h,i,j,k;
	if(b==5){
	    h=a%10000,i=h%1000,j=i%100,k=j%10;
		c=a/10000,d=h/1000,e=i/100,f=j/10,g=k/1;
		cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<endl;
	    cout<<g<<f<<e<<d<<c<<endl;
	}
	else if(b==4){
		h=a%1000,i=a%100,j=a%10;
		c=a/1000,d=h/100,e=i/10,f=j/1;
		cout<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
	    cout<<f<<e<<d<<c<<endl;
	}
	else if(b==3){
		h=a%100,i=a%10;
		c=a/100,d=h/10,e=i/1;
	    cout<<c<<" "<<d<<" "<<e<<endl;
		cout<<e<<d<<c<<endl;
	}
	else if(b==2){
	    h=a%10;
		c=a/10,d=h/1;
		cout<<c<<" "<<d<<endl;
	    cout<<d<<c<<endl;
	}
	else{
		c=a;
		cout<<c<<endl;
	    cout<<c<<endl;
	}
	return 0;
}
