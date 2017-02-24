#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=0,min=10001,s;
	for (int i=0;i<n;i++) {
		cin>>s;
		if (s>max) max=s;
		if (s<min) min=s;
	}
	cout<<max-min<<endl;
	return 0;
}
