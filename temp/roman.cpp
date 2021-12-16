#include<stdio.h>
#include<string.h>

main()
{
	int n,i,j,sum=0;
	int num[1000]={0};
	char roman[1000];
	gets(roman);
	int len=strlen(roman);
	for(i=0;i<len;i++)
	{
		if(roman[i]=='I'||roman[i]=='i')num[i]=1;
		if(roman[i]=='V'||roman[i]=='i')num[i]=5;
		if(roman[i]=='X'||roman[i]=='i')num[i]=10;
		if(roman[i]=='L'||roman[i]=='i')num[i]=50;
		if(roman[i]=='C'||roman[i]=='i')num[i]=100;
		if(roman[i]=='D'||roman[i]=='i')num[i]=500;
		if(roman[i]=='M'||roman[i]=='i')num[i]=1000;
	}
	for(i=0;i<len;i++)
	if(num[i]<num[i+1])num[i]=-num[i];
	for(i=0;i<len;i++)sum+=num[i];
	
	printf("%d",sum);
}

