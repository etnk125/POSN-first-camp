#include<stdio.h>
#include<string.h>

struct ai
{
	char name[10];
};
main()
{
	int n,max=-1,count=0,index,i,j;
	char max_c[10];
	struct ai a[1001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i].name);	
	}
	strcpy(max_c,a[0].name);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i].name,a[j].name)==0)
			{
				count++;
			//	printf("%d",count);
			//	printf("%s %s %d %d\n",a[i].name,a[j].name,a[i].count,a[j].count);
				//strcpy(a[i].name,"\0");
			//	printf("%s %s %d %d\n",a[i].name,a[j].name,a[i].count,a[j].count);
			
			}
			if(count>max)
			{
				max=count;
				index=i;
			
				
			}	
			
		}	count=0;
	}
	for(i=0;a[index].name[i]!='\0';i++)
	{
		printf("%c",a[index].name[i]);
	}
	
	
}
