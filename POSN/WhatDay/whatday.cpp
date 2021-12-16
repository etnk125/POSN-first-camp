#include<iostream>
using namespace std;
main()
{
	int day,monht,com,d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
	cin>>day>>monht>>com;
	for(int i=monht+1;i<=12;i++)
		sum+=d[i];
	sum+=d[monht]-day+com;
	sum%=7;
	if(sum==6)cout<<7;
	else cout<<6-sum;
	
}
