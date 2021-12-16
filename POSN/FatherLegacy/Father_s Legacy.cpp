//#include<iostream>
#include<stdio.h>
using namespace std;
int count=1;
float outt(float out ,float outrate)
{
	if(count==1)return out;
	else
	{
		return out+out*(outrate/100);
	}
}
void op(float in,float inrate,float out ,float outrate)
{
	printf("%d\n",count);
	float temp=outt(out,outrate);	
	in=in+in*(inrate/100);
	count++;
	if(in-temp>0)
	{
		printf("%.6f\n",temp);
		printf("%.6f\n",in-temp);
		op(in-temp,inrate,temp,outrate);
	}
	else
	{
		printf("%.6f\n0",in);
	}
}
main()
{
	float in,inrate,out,outrate;
	scanf("%f %f %f %f",&in,&inrate,&out,&outrate);
//	cout.setf(ios::fixed);
//    cout.precision(6);
	op(in,inrate,out,outrate);
	
	
}
