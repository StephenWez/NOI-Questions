#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a;
	int al=a.size();
	for (int i=2;i<=al;i++) {
		for (int j=0;j<=al-i;j++) {
			b=a;	c.erase(0);
			b.erase(j+i);
			b.erase(0,j);
			for (int l=b.size()-1;l>=0;l--) {
				c+=b[l];
			}
			if (b==c) cout<<c<<endl;
		}
	}
	return 0;
}

//12321
