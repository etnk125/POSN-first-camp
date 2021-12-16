#include <stdio.h>
//#include <conio.h>
//#include<math.h>
//#include<string.h>
main(){
	int x,y,i,j;
	scanf("%d %d",&x,&y);
    int a[x][y],b[x][y];
    for(i=0;i<x;i++)
    {
    	for(j=0;j<y;j++)
    	{
    		scanf("%d",&a[i][j]);			
		}
	}
    for(i=0;i<x;i++)
    {
    	for(j=0;j<y;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x;i++)
    {
    	for(j=0;j<y;j++)
    	{
    		
    		printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}








}
//printf("%d\n",);
//printf("%f\n",);
//printf("%c\n",);
//scanf("%",&)

