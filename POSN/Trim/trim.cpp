#include<iostream>
//#include<string.h>
using namespace std;
main()
{
	char a[10002];
	gets(a);
	for(int i=0;a[i]!=EOF;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		cout<<a[i];
	}
}
