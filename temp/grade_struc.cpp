#include<stdio.h>
struct subj
{
	int id;
	char name[20];
	float crad,grade;
	
}sub[10];
main()
{
	int n;
	float sum=0,sum_c=0;
	char zer[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %s %f %f",&sub[i].id,&sub[i].name,&sub[i].crad,&sub[i].grade);
		sum+=sub[i].crad*sub[i].grade;
		sum_c+=sub[i].crad;		
	}
	printf("%.2f\n",sum/sum_c);
	for(int i=0;i<n;i++)
	{	
		for(int k=0;k<20;k++)
		{
			zer[k]='\0';
		}
		if(sub[i].grade==0)
		{
			for(int j=0;sub[i].name[j]!='\0';j++)
			{
			zer[j]=sub[i].name[j];
			}printf("%s\n",zer);
		}
			
	}
	
}
