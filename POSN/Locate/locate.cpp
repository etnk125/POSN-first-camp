#include<iostream>
using namespace std;
main()
{
	int time;
	cin>>time;
	while(time--)
	{
		int a,b,indexa=-1,indexb=-1;
		cin>>a>>b;
		int arr[a][b];
		for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
		cin>>arr[i][j];
		////////////////////////////////////
		int max=-1;
		for(int i=0;i<a;i++)
		for(int j=1;j<b;j++)
		{
			if(arr[i][j]>max)
			{
				int temp=arr[i][j]-arr[i][j-1];
				if(temp<0)temp*=-1;
				if(temp<=10)
				{
					max=arr[i][j];
					indexa=i+1;
					indexb=j+1;
				}
			}
		}
		for(int i=0;i<a;i++)
		for(int j=0;j<b-1;j++)
		{
			if(arr[i][j]>max)
			{
				int temp=arr[i][j]-arr[i][j+1];
				if(temp<0)temp*=-1;
				if(temp<=10)
				{
					max=arr[i][j];
					indexa=i+1;
					indexb=j+1;
				}
			}
		}	
		for(int i=1;i<a;i++)
		for(int j=0;j<b;j++)
		{
			if(arr[i][j]>max)
			{
				int temp=arr[i][j]-arr[i-1][j];
				if(temp<0)temp*=-1;
				if(temp<=10)
				{
					max=arr[i][j];
					indexa=i+1;
					indexb=j+1;
				}
			}
		}
		for(int i=0;i<a-1;i++)
		for(int j=0;j<b;j++)
		{
			if(arr[i][j]>max)
			{
				int temp=arr[i][j]-arr[i+1][j];
				if(temp<0)temp*=-1;
				if(temp<=10)
				{
					max=arr[i][j];
					indexa=i+1;
					indexb=j+1;
				}
			}
		}
		cout<<indexa<<' '<<indexb<<endl;
	}
}
