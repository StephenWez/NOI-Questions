#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double h;
	cin>>h;
	double sum=0,he=0;
	for (int i=0;i<10;i++) {
		sum+=h;
		h=h/2.0;
		he=h;
		if (i==9) break;
		sum+=h;
	}
	cout<<sum<<endl<<he;
	return 0;
}
