#include<stdio.h>
//#include<math.h>
main()
{
	float money,rate;
	int year;
	scanf("%f %f %d",&money,&rate,&year);
	for(int i=1;i<=year;i++)
	{
		money*=(1+rate/100);
		printf("Y %d = %.6f\n",i,money);
	}
	
}
