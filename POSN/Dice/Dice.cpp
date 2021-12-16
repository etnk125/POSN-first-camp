#include<iostream>
using namespace std;
void dice(int line ,int command)
{
	if(command==1)
	{
		if(line==2)cout<<"  *  ";
		else cout<<"     ";
	}
	if(command==2)
	{
		if(line==0)cout<<"   * ";
		else if(line==4)cout<<" *   ";
		else cout<<"     ";
	}
	if(command==3)
	{
		if(line==0)cout<<"   * ";
		else if(line==2)cout<<"  *  ";
		else if(line==4)cout<<" *   ";
		else cout<<"     ";
	}
	if(command==4)
	{
		if(line==0||line==4)cout<<" * * ";
		else cout<<"     ";
	}
	if(command==5)
	{
		if(line==0||line==4)cout<<" * * ";
		else if(line==2)cout<<"  *  ";
		else cout<<"     ";
	}
	if(command==6)
	{
		if(line==0||line==2||line==4)cout<<" * * ";
		else cout<<"     ";
	}
}
main()
{
	int com[3];
	for(int i=0;i<3;i++)
	{
		cin>>com[i];//scanf("%d",&com[i]);		
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<'|';
			dice(i,com[j]);
		}
		cout<<"|\n";
	}
	
	
	
	
}
