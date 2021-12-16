#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
main()
{
	int com;
	scanf("%d ",&com);
	char a[300];
	gets(a);
	vector<char> arr;
	
	
	if(com==1)
	{
		for(int i=0;a[i]!='\0';i++)
		{
			if(isalpha(a[i]))arr.push_back(toupper(a[i]));
		}
		while(!arr.empty())
		{
			int n=arr.size()-1;
			n=n/2;
			cout<<arr[n];
			arr.erase(arr.begin()+n);
		}
		cout<<endl;
	}
	else
	{
		int len=strlen(a);
		int n=strlen(a)%2;
		for(int i=0;a[i]!='\0';i++)
		{
			if(n==0)
			{
				if(i%2==0)
				{
					reverse(arr.begin(),arr.end());
					arr.push_back(a[i]);
					reverse(arr.begin(),arr.end());
				}
				else
				{
					arr.push_back(a[i]);
				}
			}
			else
			{
				if(i%2==1)
				{
					reverse(arr.begin(),arr.end());
					arr.push_back(a[i]);
					reverse(arr.begin(),arr.end());
				}
				else
				{
					arr.push_back(a[i]);
				}
			}
		}
	}
//	cout<<a<<endl;
	for(int i=0;i<arr.size();i++)
	cout<<arr[i];
}
