//定义一节行数为总行数减去最后一行之后除以节数的值 
#include<iostream>
//#include<cstdio>
using namespace std;
int main(){
	int n,i,j,l,a[100],b[100],space,num;
	cin>>n;
	//n组输入 
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i];
		num=a[i];//每行长度
		//输出每节
		for(j=0;j<b[i];j++){
			//输出此节前半截图形 
			for(l=1;l<=(num+1)/2;l++){ 
				//当此行为每节第一行时输出 
				if(l==1){
					cout<<'X';
					for(space=1;space<=num-2;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
				//当此行为中间行时输出 
				else if(l==(num+1)/2){
					for(space=1;space<=(num+1)/2-1;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
				//输出其他行 
				else{
					for(space=1;space<=l-1;space++)
						cout<<' ';
					cout<<'X';
					for(space=l+1;space<=num-l;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
			}
			//输出此节后半截图形 
			for(l=1;l<=num-(num+1)/2-1;l++){ 
				for(space=1;space<=(num+1)/2-l-1;space++)
				{
					cout<<' ';
				}
				cout<<'X';
				for(space=(num+1)/2-l+1;space<=num-((num+1)/2-l);space++)
				{
					cout<<' ';
				}
				cout<<'X'<<endl;
			}
			//当此行为图形最后一行时输出 
			if(j==b[i]-1)
			{
				cout<<'X';
				for(space=1;space<=num-2;space++)
				{
					cout<<' ';
				}
				cout<<'X'<<endl;
			}
		}
		cout<<endl;//换行 
	}
	return 0;	
} 
