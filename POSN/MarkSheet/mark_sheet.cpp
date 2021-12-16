#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<string,int> si;
typedef pair<int,si> isi;
main()
{
	int n;
	cin>>n;
	int code[n];
	si all[n];
	isi alll[n];
	for(int i=0;i<n;i++)
	{
		cin>>code[i];
		cin>>all[i].first;
		int temp;
		all[i].second=0;
		for(int j=0;j<3;j++)
		{
			cin>>temp;
			all[i].second+=temp;
		}
		alll[i].first=code[i];
		alll[i].second=all[i];
	}
	sort(alll,alll+n);
	for(int i=0;i<n;i++)
	{
		cout<<alll[i].first<<' ';
		cout<<alll[i].second.first<<' ';
		cout<<alll[i].second.second<<endl;
	}
	
}
