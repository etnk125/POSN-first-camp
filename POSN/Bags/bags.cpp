#include<iostream>
using namespace std;
main()
{
	int n,m,count=1,sum=0;
	cin>>n>>m;
	while(n--)
	{
		int temp;
		cin>>temp;
		if(temp<=m)
		{
			if(sum+temp<=m)sum+=temp;
			else
			{
				sum=temp;
				count++;
			}	
		}
		
	//	cout<<sum<<count<<endl;
	}
	
	cout<<count;
}
