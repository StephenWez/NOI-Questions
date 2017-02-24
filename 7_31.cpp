#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int js1[1001],js2[1001],js3=0,pd;
	js1[0]=a[0]-48;
	for (int i=0;i<a.size();i++) {
		pd=a[i]-48;
		if (js1[js3]==pd) js2[js3]++;
		else {
			js3++;
			js1[js3]=pd;
			js2[js3]=0;
		}
	}
	for (int i=0;i<js3;i++) {
		cout<<js1[i]<<js2[i];
	}
	return 0;
}
