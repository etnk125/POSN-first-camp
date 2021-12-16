#include<iostream>
using namespace std;
main()
{
	int time;
	unsigned long long n;
	cin>>n>>time;
	time*=3;
	if(n==0)cout<<0;
	else if (time==0)cout<<n;
	else
	while(time--)
	{
		n*=2;
		cout<<n<<endl;
	}
	
}
