#include<iostream>
using namespace std;
main()
{
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=a;j>i;j--)
		{
			cout<<' ';
		}
		for(int j=0;j<i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(int i=1;i<a;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<' ';
		}
		for(int j=0;j<a-i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
