#include<iostream>
#include<vector>
#include<utility>
using namespace std;
typedef unsigned long long int ull;
main()
{
	int a;
	cin>>a;
	vector<int> arr;
	if(a==0)cout<<0;
	else
	{
		for(int i=0;a>0;i++)
		{
			arr.push_back(a%2);
			a=a>>1;
		}
		while(!arr.empty())
		{
			cout<<arr[arr.size()-1];
			arr.pop_back();
		}	
	}
	
}
