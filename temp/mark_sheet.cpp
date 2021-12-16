#include<stdio.h>
struct subj
{
	int id;
	char name[20];
	int	score1,score2,score3;
	
}sub[10];
main()
{
	int n;
	int sum=0;
	char zer[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	for(int k=0;k<20;k++)
		{
			zer[k]='\0';
		}
		scanf("%d %s %d %d %d",&sub[i].id,&sub[i].name,&sub[i].score1,&sub[i].score2,&sub[i].score3);
		printf("%d %s %d\n",sub[i].id,sub[i].name,sub[i].score1+sub[i].score2+sub[i].score3);	
	}
}
