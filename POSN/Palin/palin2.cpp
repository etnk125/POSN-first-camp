#include<iostream>
using namespace std;
bool check(string a,int st,int fin)
{
	if(fin>=st)
	{
		if(a[fin]!=a[st])
		{
			return 0;
		}
		return check(a,++st,--fin);	
	}
	else
	{
		return 1;
	}
	
}
main()
{
	string a;
	cin>>a;
	int st=0,fin=a.size()-1;
//	bool index=0;
	if(check(a,st,fin))cout<<"Yes";
	else cout<<"No";
}
