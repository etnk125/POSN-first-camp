#include<iostream>
using namespace std;
main()
{
	int a,b;
	cin>>a>>b;
	
	int arr[a][b];
	for(int i=0;i<a;i++)
	for(int j=0;j<b;j++)
	cin>>arr[i][j];
	for(int i=0;i<a;i++)
	for(int j=3;j<b;j++)
	if(arr[i][j]==arr[i][j-1])
	if(arr[i][j-1]==arr[i][j-2])
	if(arr[i][j-2]==arr[i][j-3])
	{
		cout<<"TRUE";
		return 0;
	}
	for(int i=3;i<a;i++)
	for(int j=0;j<b;j++)
	if(arr[i][j]==arr[i-1][j])
	if(arr[i-1][j]==arr[i-2][j])
	if(arr[i-2][j]==arr[i-3][j])
	{
		cout<<"TRUE";
		return 0;
	}
	for(int i=3;i<a;i++)
	for(int j=3;j<b;j++)
	if(arr[i][j]==arr[i-1][j-1])
	if(arr[i-1][j-1]==arr[i-2][j-2])
	if(arr[i-2][j-2]==arr[i-3][j-3])
	{
		cout<<"TRUE";
		return 0;
	}
	for(int i=3;i<a;i++)
	for(int j=3;j<b;j++)
	if(arr[i][j-3]==arr[i-1][j-2])
	if(arr[i-1][j-2]==arr[i-2][j-1])
	if(arr[i-2][j-1]==arr[i-3][j])
	{
		cout<<"TRUE";
		return 0;
	}
	cout<<"FALSE";
	
	
	
	
}
