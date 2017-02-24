#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a,b,c,d;
	cin>>a>>b;
	c=a+a;d=b+b;
	if (c.find(b)!=string::npos&&a.size()>=b.size()) {cout<<"true";return 0;}
	if (d.find(a)!=string::npos&&b.size()>=a.size()) {cout<<"true";return 0;}
	cout<<"false";
	return 0;
}
