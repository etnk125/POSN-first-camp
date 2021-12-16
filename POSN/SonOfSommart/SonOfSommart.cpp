#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
	string a;
	cin>>a;
	int count=1;
	vector<int> arr;
	
	for(int i=1;i<a.size();i++)
	{
		if(a[i]==a[i-1])count++;
		else
		{
			if(count%2==0)
			{
				cout<<"NO";
				return 0;
			}
			arr.push_back(count);
			count=1;
		}
	}	
	
	arr.push_back(count);
//	for(int i=0;i<arr.size();i++)
//	cout<<arr[i];
	while(arr.size()>1)
	{
		if(arr[arr.size()-1]!=arr[0])
		{
			cout<<"NO";
			return 0;
		}
		else
		{
			arr.pop_back();
			reverse(arr.begin(),arr.end());
			arr.pop_back();
		}
	}
	cout<<"YES";

}
