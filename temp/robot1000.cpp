#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main()
{
	int j,i,x=0,y=0;
	char walk[100000];
	gets(walk);
	for(i=0;walk[i]!='\0';i++)
	{
		
		if(walk[i]=='N')y++;
		if(walk[i]=='S')y--;
		if(walk[i]=='W')x--;
		if(walk[i]=='E')x++;
		if(walk[i]=='Z')
		{
			x=0;
			y=0;	
		}
	}
	cout<<x<<" "<<y<<endl;
}
