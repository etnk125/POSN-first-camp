#include<iostream>
using namespace std;
main()
{
	string a,b;
	int xp,yp;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	for(int j=0;j<b.size();j++)
	if(a[i]==b[j])
	{
		xp=i;
		yp=j;
	}
	for(int i=0;i<b.size();i++)
	{
		if(i!=yp)
		{
			for(int k=0;k<xp;k++)
			cout<<' ';
			cout<<b[i]<<endl;
		}
		else cout<<a<<endl;
	}
}
