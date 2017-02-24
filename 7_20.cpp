#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int l=a.size();
	if (a[l-1]=='r'&&a[l-2]=='e') {
		for (int j=0;j<l-2;j++) cout<<a[j];
		return 0;
	}
	if (a[l-1]=='y'&&a[l-2]=='l') {
		for (int j=0;j<l-2;j++) cout<<a[j];
		return 0;
	}
	if (a[l-1]=='g'&&a[l-2]=='n'&&a[l-3]=='i') {
		for (int j=0;j<l-3;j++) cout<<a[j];
		return 0;
	}
	cout<<a;
	return 0;
}
