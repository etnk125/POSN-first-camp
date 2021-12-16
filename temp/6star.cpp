#include<stdio.h>
main()
{
	int H,n,j,i,k,l;
	scanf("%d %d",&H,&n);
	int h=H/3;
	for(l=0;l<n;l++)
	{
		int t=0,dot;
		for(i=0;i<H+h;i++)
		{
			if(i<h)//1
			{
				dot=2*i+1;
				for(j=1;j<H-dot/2;j++)
				{
					printf("-");
				}
				for(j=0;j<dot;j++)
				{
					printf("*");
				}printf("\n");
			}
			else if(i>=h&&i<(H+h)/2)//2
			{
				dot=2*H-1-2*(i-h);
				for(j=1;j<H-dot/2;j++)
				{
					printf("-");
				}
				for(j=0;j<dot;j++)
				{
					printf("*");
				}printf("\n");
			}
			else if(i>=(H+h)/2&&i<=H)//2
			{
				dot=2*H-1-2*(H+h)+2*i;
				for(j=1;j<H-dot/2;j++)
				{
					printf("-");
				}
				for(j=0;j<dot;j++)
				{
					printf("*");
				}printf("\n");
			}
			
			
			
			
			
			
		
		
		
		
		}
		
		
	}
	
}

/*

*/
