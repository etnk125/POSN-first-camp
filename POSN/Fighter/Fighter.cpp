#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int a[5],b[5],w=0,l=0,d=0,temp;
	for(int i=0;i<5;i++)cin>>a[i];
	for(int i=0;i<5;i++)cin>>b[i];
	sort(a,a+5);
	sort(b,b+5);	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			temp=j;
			if(b[i]<a[j]&&b[j]!=0)break;
		}
		if(b[i]<a[temp])w++;
		if(b[i]==a[temp])d++;
		if(b[i]>a[temp])l++;
		a[temp]=0;
	}
	
	cout<<w<<' '<<d<<' '<<l;
//	for(int i=0;i<5;i++)cout<<a[i];
//	for(int i=0;i<5;i++)cout<<b[i];
}
