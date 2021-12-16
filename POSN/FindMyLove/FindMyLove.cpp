#include<iostream>
//#include<string.h>
using namespace std;
main()
{
	char arr[102];
	gets(arr);
	string a=arr;
//	cin>>a;
	int i;
	for(i=0;i<a.size();i++)
	{
		if(a[i]=='L'||a[i]=='l')
		if(a[i+1]=='O'||a[i+1]=='o')
		if(a[i+2]=='V'||a[i+2]=='v')
		if(a[i+3]=='E'||a[i+3]=='e')
		break;
	//	cout<<a[i];
	}
	if(i!=a.size())cout<<i;
	else cout<<"SINGLE";
	
}
