#include<stdio.h>
#include<math.h>
main()
{
	char k[8];
	int a[8],i;
	gets(k);
	for(i=0;i<8;i++)
	{
		if(k[i]=='1')a[i]=1;
		else a[i]=0;
	}
	printf("(%d*128)+(%d*64)+(%d*32)+(%d*16)+(%d*8)+(%d*4)+(%d*2)+(%d*1) = %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],(a[0]*128)+(a[1]*64)+(a[2]*32)+(a[3]*16)+(a[4]*8)+(a[5]*4)+(a[6]*2)+(a[7]*1))
;}
