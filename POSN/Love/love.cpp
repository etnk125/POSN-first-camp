#include<iostream>
using namespace std;
void L()
{
	cout<<"#\n#\n###\n";
}
void O()
{
	cout<<"###\n# #\n###\n";
}
void V()
{
	cout<<"# #\n# #\n #\n";
}
void E()
{
	cout<<"###\n##\n###\n";
}

main()
{
	string a;
	cin>>a;
	for(int i=0;i<4;i++)
	{
		if(a[i]=='L')L();
		if(a[i]=='O')O();
		if(a[i]=='V')V();
		if(a[i]=='E')E();
		cout<<endl;	
	}
	
}
