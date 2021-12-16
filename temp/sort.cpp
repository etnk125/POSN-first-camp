#include<iostream>
using namespace std;
main()
{
	int n,j,i,k,temp,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;	
			count+=2;
		}
	}
//	for(i=0;i<n;i++)
//	cout<<a[i]<<endl;
	cout<<count;
}
