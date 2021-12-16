#include<stdio.h>
#include<string.h>
main()
{
	char a[11],b[11],word;
	int i,j;
	scanf("%s",a);
	scanf("%s",b);
	int la,lb;
	for(i=0;a[i]!='\0';i++)
	for(j=0;b[j]!='\0';j++)
	{
		if(a[i]==b[j])
		{
			word=a[i];
			la=i,lb=j;
		}
	}

for(i=0;b[i]!='\0';i++)
{
	if(word==b[i])
	{
		printf("%s\n",a);
	}else
	{
		for(j=0;j<la;j++)printf(" ");
		
		printf("%c\n",b[i])
	;}
}
}

	
