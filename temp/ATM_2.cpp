/*
LANG: C++
COMPILER: WCB
*/
#include<stdio.h>
main(){
	int i=0,n,j,thao_max,pent_max,hun_max,m[100],m2[100],t,p,h;
scanf("%d %d %d",&thao_max,&pent_max,&hun_max);
	for(i=0;thao_max!=0||pent_max!=0||hun_max!=0;i++)
	{	
		scanf("%d",&m[i]);
		if(thao_max==0&&pent_max==0&&hun_max==0)
		{
			printf("EMPTY");
			break;
		}else
		{
//			t=m[i]/1000;
//			p=(m[i]-t*1000)/500;
//			h=(m[i]-t*1000-p*500)/100;
			if(m[i]<=thao_max*1000+pent_max*500+hun_max*100&&m[i]%100==0)
			{
	
				if((m[i]>hun_max*100+pent_max*500)&&m[i]<1000)
				{
					printf("ERROR\n");
				}
				else
				{
					for(j=0;m[i]>=1000&&j<thao_max;j++)
					{
						m[i]-=1000;
						
					}
					printf("1000 = %d\n",j);
					thao_max=thao_max-j;
				
					for(j=0;m[i]>=500&&j<pent_max;j++)
					{
						m[i]-=500;
					}
					printf("500 = %d\n",j);
					pent_max=pent_max-j;
					
					for(j=0;m[i]>=100&&j<hun_max;j++)
					{
						m[i]-=100;
					}
					printf("100 = %d\n",j);
					hun_max=hun_max-j;
				}
				
						
			}else printf("ERROR\n");printf("%d %d %d\n",thao_max,pent_max,hun_max);
		}
	
	}	printf("EMPTY");
}


