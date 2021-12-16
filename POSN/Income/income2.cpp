#include<stdio.h>
#include<math.h>
main()
{
	float money,rate;
	int year;
	scanf("%f %f %d",&money,&rate,&year);
	for(int i=1;i<=year;i++)
	printf("Y %d = %.6f\n",i,money*pow(1+(rate)/float(100),i));
}
