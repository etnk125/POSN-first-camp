#include<iostream>
using namespace std;
main()
{
	int n,count=0;
	cin>>n;
	bool arr[480]={0};
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		arr[i]=1;
	}
	for(int i=0;i<480;i++)
	if(arr[i])count++;
	cout<<480-count;
}
