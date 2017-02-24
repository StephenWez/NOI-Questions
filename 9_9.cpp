#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int js[10001]={0},max=0;
	for (int i=0;i<n;i++) {
		cin>>m;
		if (m>max) max=m;
		js[m]++;
	}
	for (int i=0;i<=max;i++) {
		cout<<js[i]<<endl;
	}
	return 0;
}
