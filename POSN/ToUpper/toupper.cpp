#include<iostream>
using namespace std;
main()
{
	string a;
	cin>>a;
	for(int i=0;i<a.size();i++)
	if(a[i]>='a'&&a[i]<='z')
	a[i]-=32;
	cout<<a;
	
}
