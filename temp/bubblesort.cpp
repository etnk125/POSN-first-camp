#include<stdio.h>
main()
{
	int a[5]={15,34,28,36,11},temp,i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}

	
	//scanf("%d",&a);
	
}
