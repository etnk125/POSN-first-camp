#include <stdio.h>
main(){
	int m,n,i,j,count=0;
	scanf("%d%d",&m,&n);
    int a[m],b[n];
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				count++;
			}
		}	
	}
	printf("%d",count);


}

