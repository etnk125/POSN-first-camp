#include<stdio.h>
#include<math.h>
main()
{
	double a;
	scanf("%lf",&a);
	double r=M_PI/180;
	printf("%lf\n",sin(a*r));
	printf("%lf\n",cos(a*r));
	printf("%lf\n",tan(a*r));
	
}
