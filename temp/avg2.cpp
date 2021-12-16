#include <stdio.h>
main(){
	int n,i,min,max;
    float sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	sum+=a[i];
	}
	min=a[0];
    max=a[0];
	for(i=0;i<n;i++)
    {
    	if(a[i]<min)min=a[i];
    	if(a[i]>max)max=a[i];
	}
	printf("%.2f ",sum/n);
	printf("%d ",min);
	printf("%d",max);

}

/*    for(i=0;i<a;i++)
    {
    	if(b[i]==c)
    	{
    		printf("position %d",i+1);
		}
	}*/
	
	

