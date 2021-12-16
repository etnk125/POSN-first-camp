#include <stdio.h>

main(){
    int n,i,j,c,sum=0,min,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    	printf("put your num %d : ",i+1);
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
	printf("sum = %d\n",sum);
	printf("avg = %d\n",sum/n);
	printf("min = %d\n",min);
	printf("max = %d\n",max);
	printf("range = %d\n",max-min);


    









}

/*    for(i=0;i<a;i++)
    {
    	if(b[i]==c)
    	{
    		printf("position %d",i+1);
		}
	}*/
	
	

