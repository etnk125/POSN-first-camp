#include<iostream>
using namespace std;
main()
{
	cout.setf(ios::fixed);
	cout.precision(6);
	float in,rin,out,rout;
	int i=1;
	cin>>in>>rin>>out>>rout;
	in=in+in*rin/100-out;
	cout<<i<<endl;
	cout<<out<<endl;
	cout<<in<<endl;
	while(1)
	{
		cout<<++i<<endl;
		if(in>out)
		{
			out=out+out*rout/100;
			in=in+in*rin/100-out;
			cout<<out<<endl;
			cout<<in<<endl;
		}
		else
		{
			in=in+in*rin/100;
			cout<<in<<endl<<'0';
			break;
		}
	}
}
