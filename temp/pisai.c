#include<stdio.h>
main(){
	int i;
	long int max,min,a;
	scanf("%ld",&a);
	max=a;min=a;
	for (i=1;i>0;i++)
	{
		scanf("%ld",&a);
		if(a==1001) break;
		else if(a<=min)min=a;
		else if(a>=max)max=a;
	}
	printf("%ld ",max-min);
}
