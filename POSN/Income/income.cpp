#include<stdio.h>
float update(float money,float rate)
{
	money+=money*rate/float(100);
	return money;
}
main()
{
	int years;
	float money,rate;
	scanf("%f %f %d",&money,&rate,&years);
	for(int i=1;i<=years;i++)
	{
		money=update(money,rate);
		printf("Y %d = %.6f\n",i,money);
	}
}
