#include<iostream>
#include<cstring>
using namespace std;
int main()					//ABCEFAGADEGKABUVKLM ABCEFAGADEGKABUVKLM
{							//MADJKLUVKL MADJKLUVKL
	string a,b,c,s1,s2;
	cin>>a>>b;
	int al=a.size(),bl=b.size(),s1l,s2l,max=0;
	a+=a;	b+=b;
	if (al>bl) {s1=a;s2=b;s1l=al;s2l=bl;}
	else {s1=b;s2=a;s1l=bl;s2l=al;}
	for (int i=s2l;i>0;i--) {
		for (int j=0;j<s2l;j++) {
			c=s2;
			c.erase(j+i);
			c.erase(0,j);
			if (s1.find(c)!=string::npos) {
				cout<<i<<endl;
				return 0;
			}
		}
	}
}

//abcde abcde
//1212 1212
//12 12
