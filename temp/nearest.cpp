#include <stdio.h>
#include<math.h>

main(){
    int n,i,j,p1=0,p2=0;
    scanf("%d",&n);
    double x[n],y[n],d;
    
    for(i=0;i<n;i++)
    {
    		scanf("%lf %lf",&x[i],&y[i]);
	}
	double near=2000000;
	for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i!=j)
    		{
    			d=sqrt((pow(x[i]-x[j],2)+pow(y[i]-y[j],2)));
    			if(near > d)
   		 		{
    				near=d;
    				p1=i+1;
    				p2=j+1;
				}
			}
		}
	}
	if (p2>=p1)printf("%d %d %.2lf\n",p1,p2,near);
	else printf("%d %d %.2lf\n",p2,p1,near);







}

