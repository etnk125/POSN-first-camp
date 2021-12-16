#include<iostream>
using namespace std;
main()
{
	int j,i,x=0,y=0,count=0;
	cin>>x>>y;
	char men[x+1][y+1];
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	{
		cin>>men[i][j];
	}	
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
	{
		if(men[i][j]=='S'&&men[i+1][j]=='N')count++;
		
		if(men[i][j]=='E'&&men[i][j+1]=='W')count++;

	}
	cout<<count<<endl;
}
