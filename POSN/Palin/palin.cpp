#include<iostream>
using namespace std;
main()
{
	string a;
	cin>>a;
	int st=0,fin=a.size()-1;
	bool index=0;
	while(fin-->st++)
	{
		if(a[fin]!=a[st])
		{
			index=1;
			break;
		}
	}
	if(index)cout<<"No";
	else cout<<"Yes";
}
