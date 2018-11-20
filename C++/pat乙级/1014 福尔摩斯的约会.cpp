/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string date[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string str1,str2,str3,str4;
	cin>>str1>>str2>>str3>>str4;
	int l1,l2,l3,l4,d=0,t=0,m;
	l1=str1.size();
	l2=str2.size();
	l3=str3.size();
	l4=str4.size();
	for(int i=0;i<(l1<l2?l1:l2);i++)
	{
		if(str1[i]>='A'&&str1[i]<='G'&&str1[i]==str2[i]&&d==0)
		{
			d=str1[i]-'A'+1;
		}
		if(str1[i]>='A'&&str1[i]<='N'&&str1[i]==str2[i]&&t==0&&d!=0)
		{
			t=str1[i]-'A'+11;
		}
		else if(str1[i]>='0'&&str1[1]<='9'&&str1[i]==str2[i]&&t==0&&d!=0)
		{
			t=str1[i];
		}
		if(d!=0&&t!=0)
		{
			break;
		}
	}
	for(int i=0;i<(l3<l4?l3:l4);i++)
	{
		if((str3[i]==str4[i]&&str3[i]>='a'&&str3[i]<='z')||(str3[i]==str4[i]&&str3[i]>='A'&&str3[i]<='Z'))
		{
			m=i;
			break;
		}
	}
	cout<<date[d-1]<<' ';
	if(t<10)
	{
		cout<<0<<t<<':';
	}
	else
	{
		cout<<t<<':';
	}
	if(m<10)
	{
		cout<<0<<m;
	}
	else
	{
		cout<<m;
	}
	return 0;
}*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
 
int main(){
	//while(1){
		string DAY[7]={"MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN "};
		string s1,s2,s3,s4;
		cin>>s1>>s2>>s3>>s4;
		int si1,si2,si3,si4;
		si1=s1.length();
		si2=s2.length();
		si3=s3.length();
		si4=s4.length();
		int i=0;
		string en;
		for(;i<si1&&i<si2;++i){
			if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G'){
				cout<<DAY[s1[i]-'A'];		
				break;
			}
		}
		++i;
		int hour;
		for(;i<si1&&i<si2;++i){
			if(s1[i]==s2[i]){
				//cout<<s1[i]<<endl;
				if(s1[i]>='0'&&s1[i]<='9'){
					hour=s1[i]-'0';					
					cout<<hour/10<<hour%10<<":";//核心
					break;//核心
				}else if(s1[i]>='A'&&s1[i]<='N'){					
					hour=(s1[i]-'A'+10);
					cout<<hour/10<<hour%10<<":";
					break;//核心
				}
			}
		}
 
		for(int i=0;i<si3&&i<si4;++i){
			if(s3[i]==s4[i]){
				if((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z')){
					cout<<i/10<<i%10<<endl;
					break;//核心
				}
					
			}
		}
 
	//}
}

