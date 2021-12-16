#include<iostream>
using namespace std;
main()
{
	string a;
	cin>>a;
	int arr[a.size()];
	for(int i=0;i<a.size();i++)
	{
		int temp=0;
		if(a[i]=='I'||a[i]=='i')temp=1;
		else if(a[i]=='V'||a[i]=='v')temp=5;
		else if(a[i]=='X'||a[i]=='x')temp=10;
		else if(a[i]=='L'||a[i]=='l')temp=50;
		else if(a[i]=='C'||a[i]=='c')temp=100;
		else if(a[i]=='D'||a[i]=='d')temp=500;
		else if(a[i]=='M'||a[i]=='m')temp=1000;
		arr[i]=temp;
	}
	int sum=arr[a.size()-1];
	for(int i=0;i<a.size()-1;i++)
	{
		if(arr[i]<arr[i+1])arr[i]*=-1;
		sum+=arr[i];
	}
	cout<<sum;
}
