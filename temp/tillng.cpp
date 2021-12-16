#include <stdio.h>
main(){
    int t;
    int i,j,d,dw;
    scanf("%d",&t);
    int b[t],w[t],db[t];
    for(i=0;i<t;i++)
    {
    	scanf("%d %d",&w[i],&b[i]);
	}    
    for(i=0;i<t;i++)
    {
    	int j=1;
		while((j+2)*(j+2)-j*j<=b[i]&&j*j<=w[i])
    	{
    		j++;
		}
		db[i]=j;
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",db[i]+1);
	}
 }

