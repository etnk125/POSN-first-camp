#include <stdio.h>
main(){
	int n=0,i=0,j=0,count=0,x=0,y=0;
	scanf("%d",&n);
    int a[480]={0},b[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d%d",&x,&y);
    	for(j=x;j<=y;j++)
    	{
    		a[j]=1;
		}
	}
    for(i=0;i<=479;i++)
    {
    	if(a[i]==1)
    	{
    		count++;
		}
    	
    }
    printf("%d",480-count);

}

