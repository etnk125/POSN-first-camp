#include<stdio.h>
main()
{
	int num=0,n[40],i,j;
	scanf("%d",&num);
	
if(num==0)
{
	printf("0");
}else
{
	for(i=0;num>0;i++)
	{
		//printf("2 %d__%d ",num,num%2);
		n[i]=num%2;
		num=num>>1;
		//printf("%d\n",num);
		
	}
	//printf("1");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",n[j]);
	}

}
	
	
	
}
