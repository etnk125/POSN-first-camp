#include<iostream>
using namespace std;
int fib(int a,int b,int n)
{
	if(n!=0)
	{
		return	fib(b,a+b,n-1);
	}
	else return a+b;
}
main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a0,a1,an;
		cin>>a0>>a1>>an;
		cout<<fib(a0,a1,an-3)<<endl;
	}
}
