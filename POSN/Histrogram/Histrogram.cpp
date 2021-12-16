#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int temp;
		cin>>temp;
		cout<<temp<<' ';
		while(temp--)cout<<'*';
		cout<<endl;
	}
}
