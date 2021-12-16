#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[102];
	gets(a);
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(isalpha(a[i]))
		{
			for(int j=i+1;j<strlen(a);j++)
			{
				if(a[i]==a[j]||a[i]==a[j]+32||a[i]==a[j]-32)a[j]=' ';
			}
			cout<<a[i];	
		}
		
	}
	
	
}
