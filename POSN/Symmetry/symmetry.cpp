#include<iostream>
using namespace std;
main()
{
	int n,count=0,max=-1,index=-1,i;
	cin>>n;
	char a;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a=='o')count++;
		else
		{
			if(count%2==1)
			{
				
			}
			count=0;
		}
	}
	if(a=='o'&&count%2==1)
	{
		int x=count;
		if(x>max)
		{
			max=x;
			index=i;
		}	
	}
	cout<<index-(max+1)/2;
}
