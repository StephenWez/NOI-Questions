#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mark[n],max=0,js;	char name[n][20];
	for (int i=0;i<n;i++) cin>>mark[i]>>name[i];
	for (int i=0;i<n;i++) {
		if (mark[i]>max) {max=mark[i];js=i;}
	}
	cout<<name[js];
	return 0;
}
