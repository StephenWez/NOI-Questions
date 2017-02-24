#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	long long sum=0,max=0,js=0;
	for (int i=0;i<n;i++) {
		cin>>m;
		if (m==max) js++;
		if (m>max) {max=m;js=1;}
		sum+=m;
	}
	cout<<sum-max*js<<endl;
	return 0;
}
