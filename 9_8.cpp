#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double m[n],ans1,max=0,min=100,max_,min_,maxc=0,sum=0;
	for (int i=0;i<n;i++) {
		cin>>m[i];
		if (m[i]>max) {max=m[i];max_=i;}
		if (m[i]<min) {min=m[i];min_=i;}
		sum+=m[i];
	}
	sum=sum-max-min;
	ans1=sum/(n*1.0-2);
	for (int i=0;i<n;i++) {
		if (abs(ans1-m[i])>maxc&&i!=max_&&min_!=i) maxc=abs(ans1-m[i]);
	}
	cout<<fixed<<setprecision(2)<<ans1<<' ';
	cout<<fixed<<setprecision(2)<<maxc<<endl;
	return 0;
}
