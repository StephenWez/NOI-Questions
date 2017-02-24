#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int zhishu(int);
int main()
{
	char word[101];
	cin>>word;
	int n[26]={0};
	for (int i=0;i<strlen(word);i++) {
		n[word[i]-'a']++;
	}
	int maxn=0,minn=101;
	for (int i=0;i<26;i++) {
		if (n[i]>maxn) maxn=n[i];
		if (n[i]<minn&&n[i]!=0) minn=n[i];
	}
	if (zhishu(maxn-minn)==0) cout<<"No Answer"<<endl<<0<<endl;
	else cout<<"Lucky Word"<<endl<<maxn-minn<<endl;
	return 0;
}

int zhishu(int k)
{
	if (k<2) return 0;
	for (int i=2;i<sqrt(k);i++) {
		if (k%i==0) return 0;
	}
	return 1;
}
