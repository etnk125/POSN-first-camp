#include<iostream>
using namespace std;
main()
{
	int n,i;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		for(i=0;i<100000;i++)
		{
		//	cout<<i*i<<' '<<a<<'\n'<<4*i+4<<' '<<b<<endl;
			if(i*i>a||4*i+4>b)break;
		}
		cout<<i+1<<endl;
	}
}
