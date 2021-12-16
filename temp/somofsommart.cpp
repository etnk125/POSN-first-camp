#include<stdio.h>
main()
{
	int i,j,count=0,k=0;
	char name[1000];
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==name[i+1])
		{
			count++;
		}
		else 
		{
			if(count%2!=0)
			{
				k=1;
			//printf("%d",count);
				break;
			}count=0;
		}
	}
	if(k==0)printf("YES");
	else printf("NO");
}
