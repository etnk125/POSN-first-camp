#include<stdio.h>
#include<math.h>
char t ( int height )
{
	for(int i=1;i<height+1;i++)
		{
			for(int j=height;j>i;j--)
			{
				printf(" ");
			}
			
			for(int k=0;k<2*i-1;k++)
			{
				printf("*");
			}printf("\n");
		}
}
char r ( int width , int height )
{
	
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			printf("*");
		}printf("\n");
	}
}
main()
{
	int w,h,n,i,j,k;
	char a[10]={0};
//	for(i=0;i<10;i++)
//	{
//		a[i]="\0";
//	}
//	for(i=0;a[i]!=0;i++)
//	{
//		scanf("%c",&a[i]);
//	}
scanf("%s",a);
	if(a[0]=='r')
	{
		scanf("%d %d %d",&n,&w,&h);
		for(i=0;i<n;i++)
		{
			r(w,h);
			printf("\n");
		}
	}
	else
	{
		scanf("%d %d",&n,&h);
		for(i=0;i<n;i++)
		{
			t(h);
			printf("\n");
		
		}
	}
	
}
