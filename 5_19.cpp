#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float a[n][3];
	for (int i=0;i<n;i++) {
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	} 
	double sum=0;
	for (int i=0;i<n;i++) {
		double dis=sqrt(a[i][0]*a[i][0]+a[i][1]*a[i][1]);
		sum=sum+2*(dis/50.0)+1.5*a[i][2];
	} 
	sum=ceil(sum);
	cout<<sum; 
	return 0;
}
