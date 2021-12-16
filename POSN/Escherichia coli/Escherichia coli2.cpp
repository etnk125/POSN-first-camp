#include<iostream>
using namespace std;
unsigned long long op(unsigned long long n,int time)
{
	if(!time)return 1;
	cout<<2*n<<endl;
	op(2*n,time-1);
	
}
main()
{
	int time;
	unsigned long long n;
	cin>>n>>time;
	time*=3;
	if(n==0)cout<<0;
	else if(time==0)cout<<n;
	else op(n,time);
	
}
