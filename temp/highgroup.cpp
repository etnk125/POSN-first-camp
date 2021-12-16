#include<stdio.h>
main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
float x=n*0.27;
int y=n*0.27;
if(x-y>=0.5)
{
	y++;
}
	for(i=0;i<y;i++)
	{
		printf("|%d",a[i]);	
	}
	
	printf("|")
;}
