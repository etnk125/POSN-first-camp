#include<iostream>
using namespace std;
main()
{
	int a;
	cin>>a;
	char c='A';
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(c=='Z'+1)c-=26;
			cout<<c++;
		}
		cout<<endl;
	}
}
