#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	for (int i=a.size()-1;i>=0;i--) {
		b+=a[i];
	}
	if (a==b) cout<<"yes";
	else cout<<"no";
	return 0;
}
