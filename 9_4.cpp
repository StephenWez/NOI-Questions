#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char name[100][21],gan,west;
	long long max=0,sum=0,grade,cla,words,one=0,ans;
	for (int i=0;i<n;i++) {
		cin>>name[i]>>grade>>cla>>gan>>west>>words;
		if (grade>80&&words>=1) one+=8000;
		if (grade>85&&cla>80) one+=4000;
		if (grade>90) one+=2000;
		if (grade>85&&west=='Y') one+=1000;
		if (cla>80&&gan=='Y') one+=850;
		if (one>max) {max=one;ans=i;}
		sum+=one;	one=0;
	}
	cout<<name[ans]<<endl<<max<<endl<<sum<<endl;
	return 0;
}
