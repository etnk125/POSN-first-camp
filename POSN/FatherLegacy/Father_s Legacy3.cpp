#include<stdio.h>
main()
{
	float in,rin,out,rout;
	int i=1;
	scanf("%f%f%f%f",&in,&rin,&out,&rout);
	in=in+in*rin/100-out;
	printf("%d\n%.6f\n%.6f\n",i,out,in);
	while(1)
	{
		printf("%d\n",++i);
		if(in>out)
		{
			out=out+out*rout/100;
			in=in+in*rin/100-out;
			printf("%.6f\n%.6f\n",out,in);
		}
		else
		{
			in=in+in*rin/100;
			printf("%.6f\n0",in);
			break;
		}
	}
}
