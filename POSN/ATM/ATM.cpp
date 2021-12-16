#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	while(a!=0||b!=0||c!=0)
	{
		bool index=0;
		int temp,mon;
		int aa=0,bb=0,cc=0;
		cin>>mon;
		temp=mon;
		if(temp%100==0)
		{
			while(a>0&&temp>=1000)
			{
				a-=1;
				temp-=1000;
				index=1;aa++;
			
			}
			while(b>0&&temp>=500)
			{
				b-=1;
				temp-=500;
				index=1;bb++;//cout<<"__"<<temp<<endl;
			}
			while(c>0&&temp>=100)
			{
				c-=1;
				temp-=100;
				index=1;
				cc++;	
			}	
		}
		if(temp>0)
		{
			a+=aa;
			b+=bb;
			c+=cc;
			index=0;
		}
		if(index==0)cout<<"ERROR\n";
		else
		{
			cout<<"1000 = "<<aa<<endl;
			cout<<"500 = "<<bb<<endl;
			cout<<"100 = "<<cc<<endl;
			
		}
		cout<<a<<' '<<b<<' '<<c<<"\n";
	}
	cout<<"EMPTY";
}
