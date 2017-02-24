#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	string a;
	int n;
	getline(cin,a);
	cin>>n;	getchar();
	string b1[n],b2[n],b3[n];	//b1=id,b2=password,b3=email
	for (int i=0;i<n;i++) {
		cin>>b1[i]>>b2[i]>>b3[i];
	}
	int js=0,e[n];
	for (int i=0;i<n;i++) if (a==b3[i]) {e[js]=i;js++;}
	for (int i=0;i<js;i++) {
		for (int j=0;j<b2[e[i]].size();j++) {
			if (b2[e[i]][j]>=65&&b2[e[i]][j]<=90) b2[e[i]][j]=tolower(b2[e[i]][j]);
			else if (b2[e[i]][j]>=97&&b2[e[i]][j]<=122) b2[e[i]][j]=toupper(b2[e[i]][j]);
		}
	}
	if (js==0) cout<<"empty";
	else for (int i=0;i<js;i++) {
		cout<<b1[e[i]]<<' '<<b2[e[i]]<<endl;
	}
	return 0;
} 
