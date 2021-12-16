#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,max=-1;
	cin>>n;
	string a[n],index;
	for(int i=0;i<n;i++)
	cin>>a[i];
//	sort(a,a+n);
	int count=1;
	for(int i=0;i<n-1;i++)
	{
		count=1;
		if(a[i]!="-1-1")
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					a[j]="-1-1";
				}
			}
			if(count>max)
			{
				max=count;
				index=a[i];
			//	cout<<index<<endl;	
			}
			count=1;
		}	
	}
	cout<<index;
	
}
