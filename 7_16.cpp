#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[81],b[81];
	gets(a);
	gets(b);
	for (int i=0;i<strlen(a);i++) a[i]=tolower(a[i]);
	for (int i=0;i<strlen(b);i++) b[i]=tolower(b[i]);
	int pd=strcmp(a,b);
	if (pd>0) {cout<<'>';return 0;}
	else if (pd<0) {cout<<'<';return 0;}
	else cout<<'=';
	return 0;
}
