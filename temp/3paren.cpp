#include<stdio.h>
#include<stdlib.h>
char word[100000];
int count=0;
int p1(int j);
int p2(int j);
int p3(int j);
//*******check'('***********
int p1(int j)
{int k;
	for(int k=j+1;word[k]!='\0';k++)
	{
		if( word[k] == '(' )count+=p1(k);
		else if( word[k] == '[' )count+=p2(k);
		else if( word[k] == '{' )count+=p3(k);
		else if( word[k] == ')' )
		{
			word[j]=' ';word[k]=' ';return 0;
		}
		else if( word[k] == '}' || word[k] == ']')return 1;
	}
}

//*******check'{'***********
int p2(int j){
	int k;
	for(int k=j+1;word[k]!='\0';k++)
	{
		if( word[k] == '(' )count+=p1(k);
		else if( word[k] == '[' )count+=p2(k);
		else if( word[k] == '{' )count+=p3(k);
		else if( word[k] == '}' )
		{
			word[j]=' ';word[k]=' ';return 0;
		}		
		else if( word[k] == ')' || word[k] == ']')return 1;
	}
}

//*******check'['***********
int p3(int j){
	int k;
	for(int k=j+1;word[k]!='\0';k++)
	{
		if( word[k] == '(' )count+=p1(k);
		else if( word[k] == '[' )count+=p2(k);
		else if( word[k] == '{' )count+=p3(k);
		else if( word[k] == ']' )
		{
			word[j]=' ';word[k]=' ';return 0;
		}
		else if( word[k] == '}' || word[k] == ')')return 1;
	}
}
main(){
	int n,i;
	scanf("%d",&n);
	for(int time=0;time<n;time++)
	{	
		for(int f=0;f<100000;f++)
		{
			word[f]='\0';
		}
		count =0;
		scanf("%s",word);
		for(i=0;word[i]!='\0';i++)
		{
			if( word[i] == '(' )count+=p1(i);
			else if( word[i] == '[' )count+=p2(i);
			else if( word[i] == '{' )count+=p3(i);
			else if( word[i] == ')' ||word[i] == '}' ||word[i] == ']')
			{
				count++;
			}
		}
		if(count==0)printf("Yes\n");
		else printf("No\n");
	}
	
}
