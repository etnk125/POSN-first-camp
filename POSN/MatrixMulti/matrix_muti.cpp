#include<iostream>
using namespace std;
main()
{
	int a1,b1,a2,b2;
	cin>>a1>>b1;
	int tab1[a1][b1];
	for(int i=0;i<a1;i++)
	for(int j=0;j<b1;j++)
	{
		cin>>tab1[i][j];
	}
	cin>>a2>>b2;
	int tab2[a2][b2];
	for(int i=0;i<a2;i++)
	for(int j=0;j<b2;j++)
	{
		cin>>tab2[i][j];
	}
	
	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<b2;j++)
		{
			int temp1=0,temp2=0,sum=0;
			while(temp1!=b1&&temp2!=a2)
			sum+=tab1[i][temp1++]*tab2[temp2++][j];
			cout<<sum<<' ';
		}
		cout<<endl;	
	}
	
	
	
}
