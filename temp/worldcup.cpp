#include<stdio.h>
#include<string.h>
struct all
{
	char name[51];
	int gol;
};
main()
{
	int count[8]={0,0,0};
	int i,j,k,n,m,point[i][j];
	struct all team[5];
	for(i=0;i<4;i++)
	{
		scanf("%s",team[i].name);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		scanf("%d",&point[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			team[i].gol+=point[i][j];
			printf("%d %d %d\n",i,j,team[i].gol);
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%s %d\n",team[i].name,team[i].gol);
	}
	
}
