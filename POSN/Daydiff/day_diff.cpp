#include<iostream>
using namespace std;
main()
{
	int year[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b==d)cout<<c-a+1;
	else
	{
		int sum=c;
		for(int i=b;i<d;i++)
		sum+=year[i];
		sum=sum-a+1;
		cout<<sum;
	}
}
