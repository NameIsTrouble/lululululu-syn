//����һ������Ϊ��������ȥ���һ��֮����Խ�����ֵ 
#include<iostream>
//#include<cstdio>
using namespace std;
int main(){
	int n,i,j,l,a[100],b[100],space,num;
	cin>>n;
	//n������ 
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i];
		num=a[i];//ÿ�г���
		//���ÿ��
		for(j=0;j<b[i];j++){
			//����˽�ǰ���ͼ�� 
			for(l=1;l<=(num+1)/2;l++){ 
				//������Ϊÿ�ڵ�һ��ʱ��� 
				if(l==1){
					cout<<'X';
					for(space=1;space<=num-2;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
				//������Ϊ�м���ʱ��� 
				else if(l==(num+1)/2){
					for(space=1;space<=(num+1)/2-1;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
				//��������� 
				else{
					for(space=1;space<=l-1;space++)
						cout<<' ';
					cout<<'X';
					for(space=l+1;space<=num-l;space++)
						cout<<' ';
					cout<<'X'<<endl;
				}
			}
			//����˽ں���ͼ�� 
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
			//������Ϊͼ�����һ��ʱ��� 
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
		cout<<endl;//���� 
	}
	return 0;	
} 
