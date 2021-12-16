#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
main()
{
	int n,max=-1,index=-1,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	int count=1;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])count++;
		else
		{
			if(count>=max)
			{
				max=count;
				index=arr[i];
			}
			count=1;
		}
	}
	if(count>=max)
	{
		max=count;
		index=arr[n-1];
	}
	printf("%d %d",index,max);
}
