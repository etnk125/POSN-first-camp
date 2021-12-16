#include<stdio.h>
main(){
	int n=0,j=0;
	scanf("%d",&n);
	int men[n];
	for(int i=0;i<n;i++)
	{
		men[i]=1+i;
	}
	men[n-1]=0;
	while(men[j]!=j)
	{
		for(int i=0;i<n;i++)
		printf("%d ",men[i]);
		printf("\n");
	//	printf("%d %d******",men[j],j);
		men[j]=men[men[j]];
	//	printf("%d ",j,men[j]);
		j=men[j];
	//	printf("%d %d\n",j,men[j]);
	
	}printf("%d",j+1);
}
