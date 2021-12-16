#include<iostream>
using namespace std;
main()
{
	int n,i=1,a=1;
	cin>>n;
	while(1)
	if(a*i<=n)a*=i++;
	else break;
	cout<<i-1;
}
