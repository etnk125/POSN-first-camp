#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[2];
	cin>>a;
	int l=strlen(a);
	for(int i=0;i<l;i++)
	{
		cout<<a[i]<<i<<endl;
	}
}
