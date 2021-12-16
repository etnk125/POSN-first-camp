#include <stdio.h>

main()
{
	int x,y,i,j;
	scanf("%d %d",&x,&y);
    int a[100][100];
    for(i=0;i<x;i++)
    {
    	for(j=0;j<y;j++)
    	{
    		scanf("%d",&a[i][j]);			
		}
	}
	
for(i=0;i<y;i++)
    {
    	for(j=0;j<x;j++)
    	{
    		
    		printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	
}
