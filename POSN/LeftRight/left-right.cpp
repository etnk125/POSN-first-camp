#include<iostream>
using namespace std;
main()
{
	int n,run='A';
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(int j=1;j<=n-i;j++)cout<<' ';
			int temp=run+i-1;
			for(int j=1;j<=i;j++)
			{
				while(run>'Z')run-=26;
				while(temp>'Z')temp-=26;
				while(run<'A')run+=26;
				while(temp<'A')temp+=26;
				
				cout<<char(temp--);
	
				run++;
			}
		}
		if(i%2==0)
		{
			for(int j=1;j<=n-1;j++)cout<<' ';
			for(int j=1;j<=i;j++)
			{
				while(run>'Z')run-=26;
				while(run<'A')run+=26;
				cout<<char(run++);
			}
		}
		cout<<endl;
	}
}
