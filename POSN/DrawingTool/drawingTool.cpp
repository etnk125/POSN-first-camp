#include<iostream>
using namespace std;
void tri(int high)
{
	for(int i=0;i<high;i++)
	{
		for(int j=i;j<high-1;j++)cout<<' ';
		for(int j=0;j<=2*i;j++)cout<<'*';
		cout<<endl;
	}
	cout<<endl;
}
void rec(int x,int y)
{
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			cout<<'*';//printf('*');
		}
		cout<<endl;//printf("\n");
	}
	cout<<endl;
}
main()
{
	string a;
	int time=0,x=0,y=0,hi=0;
	cin>>a>>time;
	if(a[0]=='r')
	{
		cin>>x>>y;
		
	}
	if(a[0]=='t')
	{
		cin>>hi;
	}
	for(int i=0;i<time;i++)
	{
		if(a[0]=='r')rec(x,y);
		else if(a[0]=='t') tri(hi);
	}
}
