#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int com=1,row=1;
	while(1)
	{
		scanf("%d %d",&com,&row);
//		cin>>com>>row;
		if(com==1)/////////encode/////////
		{
			char text[300]={0};
			gets(text);
			int k=0;
			char TEXT[strlen(text)+1]={0};
			for(int i=0;i<strlen(text);i++)
			{
				if(isalpha(text[i]))
				TEXT[k++]=toupper(text[i]);
			}
			for(int j=0;j<row;j++)
			for(int i=j;i<strlen(TEXT);i+=row)
			{
				cout<<TEXT[i];
			}
		}
		else if(com==2)
		{
			int visit=0;
			char text[300]={0};
			cin>>text;
			int sh=ceil(float(strlen(text))/float(row));
			for(int i=0;visit<strlen(text);i++)
			for(int j=i;j<strlen(text);j+=sh)
			{
				cout<<char(toupper(text[j]));
				visit++;
			}
		}
		else break;
		
	}
}
