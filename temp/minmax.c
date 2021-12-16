#include<stdio.h>
main(){
	int i;
	unsigned int n;
	long int max,min,a;
	scanf("%u",&n);
	scanf("%ld",&a);
	max=a;min=a;
	for (i=1;i<n;i++)
	{
		scanf("%ld",&a);
		if(a<=min)min=a;
		if(a>=max)max=a;
	}
	printf("%ld %ld",min,max);
}
