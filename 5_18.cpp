#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float a[n][2];
	for (int i=0;i<n;i++) {
		cin>>a[i][0]>>a[i][1];
	}
	double x=a[0][1]/a[0][0];
	for (int i=1;i<n;i++) {
		double y=a[i][1]/a[i][0];
		if (y-x>0.05) cout<<"better";
		else if (x-y>0.05) cout<<"worse";
		else cout<<"same";
		if (i<n-1) cout<<endl;
	}
	return 0;
}
