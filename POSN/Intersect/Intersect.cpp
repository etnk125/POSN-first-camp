#include<iostream>
using namespace std;
main()
{
	int count=0;
	int a,b;
	cin>>a>>b;
	int aa[a],bb[b];
	for(int i=0;i<a;i++)cin>>aa[i];
	for(int i=0;i<b;i++)cin>>bb[i];
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	if(aa[i]==bb[j])count++;
	cout<<count;
}
