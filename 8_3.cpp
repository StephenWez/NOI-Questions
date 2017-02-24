#include<iostream>
using namespace std;
int main()
{
	int m,n,a,sum=0;
	cin>>m>>n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++) {
			cin>>a;
			if (i==0||j==0||i==m-1||j==n-1) sum+=a;
		}
	cout<<sum<<endl;
	return 0;
}
