#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<string> ans;
	int n;
	cin>>n;
	float min=float(INT_MAX);
	while(n--)
	{
		string temp;
		cin>>temp;
		float a,b;
		cin>>a>>b;
		a*=(1-b/100);
//		cout<<a<<"__"<<endl;
		if(a==min)
		{
			ans.push_back(temp);
		}
		if(a<min)
		{
			ans.clear();
			min=a;
			ans.push_back(temp);
		}
	} 
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<endl;
}
