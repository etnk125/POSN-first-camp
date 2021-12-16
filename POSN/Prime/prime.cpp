#include<iostream>
using namespace std;
int count=0;
bool check(int n,int run)
{
	if(n%run==0)
	{
		if(run==1)return 1;
		else return 0;
	}
	else return check(n,run-1);
	
}
main()
{
	int n;
	cin>>n;
	if(n<2)cout<<"NO";
	else
	{
		if(check(n,n-1))cout<<"YES";
		else cout<<"NO";	
	}
	
}
