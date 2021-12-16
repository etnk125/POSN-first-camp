#include<iostream>
using namespace std;
main()
{
	int count=0;
	for(int i=0;i<8;i++)
	{
		char a;
		cin>>a;
		if(a>='a'&&a<='z')count++;
	}
	if(count==8)cout<<"small";
	else if(count==0)cout<<"big";
	else cout<<"mix";
	
}
