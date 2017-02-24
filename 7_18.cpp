#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int pd=0;
	if (a.find(b)!=string::npos) pd=1;
	if (b.find(a)!=string::npos) pd=2;
	if (pd==2) cout<<a<<" is substring of "<<b;
	else if (pd==1) cout<<b<<" is substring of "<<a;
	else cout<<"No substring";
	return 0;
}
