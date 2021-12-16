#include<stdio.h>
//#include<stdlib.h>
#include<stack>
//#include<conio.h>
#include<iostream>
using namespace std;
void scan();
main(){
	int time,n;
	cin>>time;
	for(n=0;n<time;n++)
		scan();
}
//*******for n check ***********
void scan(){
	int i=0;
	char word[100001];
	cin>>word;
	int count=0,end=0;
	std::stack<char>line;
	for(i=0;word[i]!='\0';i++)
	{
		if(word[i]=='('||word[i]=='['||word[i]=='{')//found on symb
		{
			line.push(word[i]);
			count++;
		}
		else //found off symb
		{
			if(word[i]==')')
			{
				count--;
				if(count<0)
				{
					end++;break;
				}
				else if(line.top()== '(')line.pop();
				else 
				{
					end++;break;
				}
			}
			if(word[i]==']')
			{
				count--;
				if(count<0)
				{
					end++;break;
				}
				else if(line.top()== '[')line.pop();
				else 
				{
					end++;break;
				}
			}
			if(word[i]=='}')
			{
				count--;
				if(count<0)
				{
					end++;break;
				}
				else if(line.top()== '{')line.pop();
				else 
				{
					end++;break;
				}
			}
		}
	}
	if(end!=0||count!=0)cout << "no\n";
	else cout << "yes\n";
}
