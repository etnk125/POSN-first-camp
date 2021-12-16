#include<stdio.h>
#include<math.h>

float Income (float a , float b , float c ) 
{
	float sum=a*pow((1+b/100),c);
	return sum;
}
main()
{
	float m,r,year;
	scanf("%f%f%f",&m,&r,&year);
	for(int i=1;i<=year;i++)
	{
		printf("Y %d = %.6f\n",i,Income(m,r,i));
	}
	
}
