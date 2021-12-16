#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{
	int i,j,n;
	char word[101];
	gets(word);
	int len=strlen(word);
	int count=0;
	for(i=0;word[i]!='\0';i++)
	{
		if(islower(word[i]))
		{
			word[i]=word[i]-32;
		}
	}
	//printf("%s",word);
	for(i=0;word[i]!='\0';i++)
	{
		
		if(word[i]=='L')
		{
			if(word[i+1]=='O')
			{
				if(word[i+2]=='V')
				{
					if(word[i+3]=='E')
					{
						count=1;//printf("%c %c %c %c\n",word[i],word[i+1],word[i+2],word[i+3]);
						break;
						
					}
					
				}
			}
		}
		
	}
	if(count==1)
	{
		printf("%d",i);	
	}
	if(count==0)
	{
		printf("SINGLE");
	}
	
	
}
