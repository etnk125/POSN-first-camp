#include<iostream>
using namespace std;
main()
{
	int ball[3]={1,0,0},temp;
	char b[51]; cin>>b;
	for(int i=0;b[i]!='\0';i++)
	{
		char a=b[i];
		if(a=='A')
		{
			temp = ball[0];
			ball[0] = ball[1];
			ball[1] = temp;
			//cout<<ball[0]<<ball[1]<<ball[2]<<endl;
		}
		if(a=='B')
		{
			temp = ball[1];
			ball[1] = ball[2];
			ball[2] = temp;
		//	cout<<ball[0]<<ball[1]<<ball[2]<<endl;
		}
		if(a=='C')
		{
			temp = ball[0];
			ball[0] = ball[2];
			ball[2] = temp;
		//	cout<<ball[0]<<ball[1]<<ball[2]<<endl;
		}
	}
	if(ball[0]==1)cout<<"1";
	
	if(ball[1]==1)cout<<"2";
	
	if(ball[2]==1)cout<<"3";
		
}
