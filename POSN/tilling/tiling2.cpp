#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a[2];
		cin>>a[0]>>a[1];
		a[0]=sqrt(a[0]);
		a[1]=a[1]/4-1;
		sort(a,a+2);
		cout<<a[0]+2<<endl;
//		cout<<"__"<<a[0]<<a[1]<<endl;
	}
	
}
