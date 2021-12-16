#include <stdio.h>

main(){
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
    	for(j=0;j<a[i];j++)
    	{
    		printf("*");
    	}
    	printf("\n");
    }
}

