#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
main()
{
	int row=1,com=1;
	scanf("%d %d ",&row,&com);
	if(com==1)
	{
		char text[129]={0};
		gets(text);
		int k=0;
		char TEXT[129]={0};
		for(int i=0;i<strlen(text);i++)
		{
			if(isalpha(text[i]))
			{
				TEXT[k++]=toupper(text[i]);
			}
		}
		int len=strlen(TEXT);
		int n=ceil(float(len)/float(row));
		char arr[n][row+1]={0};
		for(int i=0;i<n;i++)
		for(int j=0;j<row;j++)
		{
			arr[i][j]='\0';
		}
		for(int i=0;i<len;i++)
		{
			arr[i%n][int(ceil(float(i+1)/float(n)))-1]=TEXT[i];
			cout<<TEXT[i]<<i%n<<" "<<ceil(float(i+1)/float(n))-1<<endl;
		}
		
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;arr[i][j]!='\0'&&j<row;j++)
			cout<<arr[i][j];
		}
		cout<<endl<<TEXT<<endl;
	}
}
