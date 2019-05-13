#include<iostream>
#include<iomanip>
#include <stdio.h>
#include<math.h>
using namespace std;
int main()
{
	double r,h;
	double C1,Sa,Sb,Va,Vb,pi=3.14;
	scanf("%lf""%lf",&r,&h);
	C1=2*pi*r;
	Sa=pi*r*r;
	Sb=4*pi*r*r;
	Va=(4*pi*r*r*r)/3;
	Vb=pi*r*r*h;
	C1=floor(C1*100.0)/100.0;
	Sa=floor(Sa*100.0)/100.0;
	Sb=floor(Sb*100.0)/100.0;
	Va=floor(Va*100.0)/100.0;
	Vb=floor(Vb*100.0)/100.0;
	cout<<"C1="<<fixed<<setprecision(2)<<C1<<endl;
	cout<<"Sa="<<fixed<<setprecision(2)<<Sa<<endl;
	cout<<"Sb="<<fixed<<setprecision(2)<<Sb<<endl;
	cout<<"Va="<<fixed<<setprecision(2)<<Va<<endl;
	cout<<"Vb="<<fixed<<setprecision(2)<<Vb<<endl;
	return 0;
 } 
