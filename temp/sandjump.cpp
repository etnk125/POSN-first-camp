#include<iostream>
using namespace std;
main()
{
	int j,i,start,sand,way,time,jump;
	cin>>start>>sand>>way>>time;
	for(i=0;i<time;i++)
	{
		cin>>jump;
		int count=0;
		if(jump<start)cout<<"no"<<endl;
		else
		{
		
			int distan=0;
			jump-=start;
			for(j=0;jump>0;j++)
			{
				distan+=sand;
				if(jump<=distan)
				{
					cout<<"yes"<<endl;
					break;
				}
				
				distan+=way;
				if(jump<distan)
				{
					cout<<"no"<<endl;
					break;
				}
			}
		}
	}
}
