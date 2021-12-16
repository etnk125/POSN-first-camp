#include<iostream>
using namespace std;
main()
{
	int st[2],need[2];
	for(int i=0;i<2;i++)
	cin>>st[i];
	for(int i=0;i<2;i++)
	{
		cin>>need[i];
		st[i]+=need[i];
	}
	st[0]+=st[1]/60;
	st[1]%=60;
	st[0]%=24;	
	cout<<st[0]<<' '<<st[1];
	
}
