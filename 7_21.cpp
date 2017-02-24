#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a,b,c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	a=' '+a+' ';
	b=' '+b+' ';
	c=' '+c+' ';
	for (int i=0;;i++) {
		a.replace(a.find(b),b.size(),c);
		if (a.find(b)==string::npos) break;
	}
	a.erase(0,1);
	a.erase(a.size()-1,1);
	cout<<a;
	return 0;
}

